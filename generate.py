import xml.etree.ElementTree as ET
import os

if (os.path.exists('vk.xml')):
	tree = ET.parse('vk.xml')
else:
	print("Could not find vk.xml.")
	quit()
root = tree.getroot()
f = open('VkToString.h', "w")
f.truncate(0)
for child in root:
    if (child.tag == "enums"):
        childname = child.attrib.get('name')
        type = child.attrib.get('type')
        if (type and type == "enum"):
            f.write("inline const char* " + childname + "ToString(int64_t value) {\n")
            f.write("    switch (value) {\n")
            for children in child:
                name = children.attrib.get('name')
                if (name):
                    value = children.attrib.get('value')
                    if (value):
                        f.write("    case " + value + ":\n")
                        f.write("        return \"" + name + "\";\n")
            f.write("    default:\n")
            f.write("        return \"Unknown " + childname + " value.\";\n")
            f.write("    }\n")
            f.write("}\n")
            f.write("\n")
f.close()