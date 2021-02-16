inline const char* VkImageLayoutToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_IMAGE_LAYOUT_UNDEFINED";
    case 1:
        return "VK_IMAGE_LAYOUT_GENERAL";
    case 2:
        return "VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL";
    case 3:
        return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL";
    case 4:
        return "VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL";
    case 5:
        return "VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL";
    case 6:
        return "VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL";
    case 7:
        return "VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL";
    case 8:
        return "VK_IMAGE_LAYOUT_PREINITIALIZED";
    default:
        return "Unknown VkImageLayout value.";
    }
}

inline const char* VkAttachmentLoadOpToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_ATTACHMENT_LOAD_OP_LOAD";
    case 1:
        return "VK_ATTACHMENT_LOAD_OP_CLEAR";
    case 2:
        return "VK_ATTACHMENT_LOAD_OP_DONT_CARE";
    default:
        return "Unknown VkAttachmentLoadOp value.";
    }
}

inline const char* VkAttachmentStoreOpToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_ATTACHMENT_STORE_OP_STORE";
    case 1:
        return "VK_ATTACHMENT_STORE_OP_DONT_CARE";
    default:
        return "Unknown VkAttachmentStoreOp value.";
    }
}

inline const char* VkImageTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_IMAGE_TYPE_1D";
    case 1:
        return "VK_IMAGE_TYPE_2D";
    case 2:
        return "VK_IMAGE_TYPE_3D";
    default:
        return "Unknown VkImageType value.";
    }
}

inline const char* VkImageTilingToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_IMAGE_TILING_OPTIMAL";
    case 1:
        return "VK_IMAGE_TILING_LINEAR";
    default:
        return "Unknown VkImageTiling value.";
    }
}

inline const char* VkImageViewTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_IMAGE_VIEW_TYPE_1D";
    case 1:
        return "VK_IMAGE_VIEW_TYPE_2D";
    case 2:
        return "VK_IMAGE_VIEW_TYPE_3D";
    case 3:
        return "VK_IMAGE_VIEW_TYPE_CUBE";
    case 4:
        return "VK_IMAGE_VIEW_TYPE_1D_ARRAY";
    case 5:
        return "VK_IMAGE_VIEW_TYPE_2D_ARRAY";
    case 6:
        return "VK_IMAGE_VIEW_TYPE_CUBE_ARRAY";
    default:
        return "Unknown VkImageViewType value.";
    }
}

inline const char* VkCommandBufferLevelToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COMMAND_BUFFER_LEVEL_PRIMARY";
    case 1:
        return "VK_COMMAND_BUFFER_LEVEL_SECONDARY";
    default:
        return "Unknown VkCommandBufferLevel value.";
    }
}

inline const char* VkComponentSwizzleToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COMPONENT_SWIZZLE_IDENTITY";
    case 1:
        return "VK_COMPONENT_SWIZZLE_ZERO";
    case 2:
        return "VK_COMPONENT_SWIZZLE_ONE";
    case 3:
        return "VK_COMPONENT_SWIZZLE_R";
    case 4:
        return "VK_COMPONENT_SWIZZLE_G";
    case 5:
        return "VK_COMPONENT_SWIZZLE_B";
    case 6:
        return "VK_COMPONENT_SWIZZLE_A";
    default:
        return "Unknown VkComponentSwizzle value.";
    }
}

inline const char* VkDescriptorTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DESCRIPTOR_TYPE_SAMPLER";
    case 1:
        return "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER";
    case 2:
        return "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE";
    case 3:
        return "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE";
    case 4:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER";
    case 5:
        return "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER";
    case 6:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER";
    case 7:
        return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER";
    case 8:
        return "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC";
    case 9:
        return "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC";
    case 10:
        return "VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT";
    default:
        return "Unknown VkDescriptorType value.";
    }
}

inline const char* VkQueryTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_QUERY_TYPE_OCCLUSION";
    case 1:
        return "VK_QUERY_TYPE_PIPELINE_STATISTICS";
    case 2:
        return "VK_QUERY_TYPE_TIMESTAMP";
    default:
        return "Unknown VkQueryType value.";
    }
}

inline const char* VkBorderColorToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK";
    case 1:
        return "VK_BORDER_COLOR_INT_TRANSPARENT_BLACK";
    case 2:
        return "VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK";
    case 3:
        return "VK_BORDER_COLOR_INT_OPAQUE_BLACK";
    case 4:
        return "VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE";
    case 5:
        return "VK_BORDER_COLOR_INT_OPAQUE_WHITE";
    default:
        return "Unknown VkBorderColor value.";
    }
}

inline const char* VkPipelineBindPointToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PIPELINE_BIND_POINT_GRAPHICS";
    case 1:
        return "VK_PIPELINE_BIND_POINT_COMPUTE";
    default:
        return "Unknown VkPipelineBindPoint value.";
    }
}

inline const char* VkPipelineCacheHeaderVersionToString(int64_t value) {
    switch (value) {
    case 1:
        return "VK_PIPELINE_CACHE_HEADER_VERSION_ONE";
    default:
        return "Unknown VkPipelineCacheHeaderVersion value.";
    }
}

inline const char* VkPrimitiveTopologyToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PRIMITIVE_TOPOLOGY_POINT_LIST";
    case 1:
        return "VK_PRIMITIVE_TOPOLOGY_LINE_LIST";
    case 2:
        return "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP";
    case 3:
        return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST";
    case 4:
        return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP";
    case 5:
        return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN";
    case 6:
        return "VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY";
    case 7:
        return "VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY";
    case 8:
        return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY";
    case 9:
        return "VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY";
    case 10:
        return "VK_PRIMITIVE_TOPOLOGY_PATCH_LIST";
    default:
        return "Unknown VkPrimitiveTopology value.";
    }
}

inline const char* VkSharingModeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SHARING_MODE_EXCLUSIVE";
    case 1:
        return "VK_SHARING_MODE_CONCURRENT";
    default:
        return "Unknown VkSharingMode value.";
    }
}

inline const char* VkIndexTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_INDEX_TYPE_UINT16";
    case 1:
        return "VK_INDEX_TYPE_UINT32";
    default:
        return "Unknown VkIndexType value.";
    }
}

inline const char* VkFilterToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_FILTER_NEAREST";
    case 1:
        return "VK_FILTER_LINEAR";
    default:
        return "Unknown VkFilter value.";
    }
}

inline const char* VkSamplerMipmapModeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SAMPLER_MIPMAP_MODE_NEAREST";
    case 1:
        return "VK_SAMPLER_MIPMAP_MODE_LINEAR";
    default:
        return "Unknown VkSamplerMipmapMode value.";
    }
}

inline const char* VkSamplerAddressModeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SAMPLER_ADDRESS_MODE_REPEAT";
    case 1:
        return "VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT";
    case 2:
        return "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE";
    case 3:
        return "VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER";
    default:
        return "Unknown VkSamplerAddressMode value.";
    }
}

inline const char* VkCompareOpToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COMPARE_OP_NEVER";
    case 1:
        return "VK_COMPARE_OP_LESS";
    case 2:
        return "VK_COMPARE_OP_EQUAL";
    case 3:
        return "VK_COMPARE_OP_LESS_OR_EQUAL";
    case 4:
        return "VK_COMPARE_OP_GREATER";
    case 5:
        return "VK_COMPARE_OP_NOT_EQUAL";
    case 6:
        return "VK_COMPARE_OP_GREATER_OR_EQUAL";
    case 7:
        return "VK_COMPARE_OP_ALWAYS";
    default:
        return "Unknown VkCompareOp value.";
    }
}

inline const char* VkPolygonModeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_POLYGON_MODE_FILL";
    case 1:
        return "VK_POLYGON_MODE_LINE";
    case 2:
        return "VK_POLYGON_MODE_POINT";
    default:
        return "Unknown VkPolygonMode value.";
    }
}

inline const char* VkFrontFaceToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_FRONT_FACE_COUNTER_CLOCKWISE";
    case 1:
        return "VK_FRONT_FACE_CLOCKWISE";
    default:
        return "Unknown VkFrontFace value.";
    }
}

inline const char* VkBlendFactorToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_BLEND_FACTOR_ZERO";
    case 1:
        return "VK_BLEND_FACTOR_ONE";
    case 2:
        return "VK_BLEND_FACTOR_SRC_COLOR";
    case 3:
        return "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR";
    case 4:
        return "VK_BLEND_FACTOR_DST_COLOR";
    case 5:
        return "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR";
    case 6:
        return "VK_BLEND_FACTOR_SRC_ALPHA";
    case 7:
        return "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA";
    case 8:
        return "VK_BLEND_FACTOR_DST_ALPHA";
    case 9:
        return "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA";
    case 10:
        return "VK_BLEND_FACTOR_CONSTANT_COLOR";
    case 11:
        return "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR";
    case 12:
        return "VK_BLEND_FACTOR_CONSTANT_ALPHA";
    case 13:
        return "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA";
    case 14:
        return "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE";
    case 15:
        return "VK_BLEND_FACTOR_SRC1_COLOR";
    case 16:
        return "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR";
    case 17:
        return "VK_BLEND_FACTOR_SRC1_ALPHA";
    case 18:
        return "VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA";
    default:
        return "Unknown VkBlendFactor value.";
    }
}

inline const char* VkBlendOpToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_BLEND_OP_ADD";
    case 1:
        return "VK_BLEND_OP_SUBTRACT";
    case 2:
        return "VK_BLEND_OP_REVERSE_SUBTRACT";
    case 3:
        return "VK_BLEND_OP_MIN";
    case 4:
        return "VK_BLEND_OP_MAX";
    default:
        return "Unknown VkBlendOp value.";
    }
}

inline const char* VkStencilOpToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_STENCIL_OP_KEEP";
    case 1:
        return "VK_STENCIL_OP_ZERO";
    case 2:
        return "VK_STENCIL_OP_REPLACE";
    case 3:
        return "VK_STENCIL_OP_INCREMENT_AND_CLAMP";
    case 4:
        return "VK_STENCIL_OP_DECREMENT_AND_CLAMP";
    case 5:
        return "VK_STENCIL_OP_INVERT";
    case 6:
        return "VK_STENCIL_OP_INCREMENT_AND_WRAP";
    case 7:
        return "VK_STENCIL_OP_DECREMENT_AND_WRAP";
    default:
        return "Unknown VkStencilOp value.";
    }
}

inline const char* VkLogicOpToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_LOGIC_OP_CLEAR";
    case 1:
        return "VK_LOGIC_OP_AND";
    case 2:
        return "VK_LOGIC_OP_AND_REVERSE";
    case 3:
        return "VK_LOGIC_OP_COPY";
    case 4:
        return "VK_LOGIC_OP_AND_INVERTED";
    case 5:
        return "VK_LOGIC_OP_NO_OP";
    case 6:
        return "VK_LOGIC_OP_XOR";
    case 7:
        return "VK_LOGIC_OP_OR";
    case 8:
        return "VK_LOGIC_OP_NOR";
    case 9:
        return "VK_LOGIC_OP_EQUIVALENT";
    case 10:
        return "VK_LOGIC_OP_INVERT";
    case 11:
        return "VK_LOGIC_OP_OR_REVERSE";
    case 12:
        return "VK_LOGIC_OP_COPY_INVERTED";
    case 13:
        return "VK_LOGIC_OP_OR_INVERTED";
    case 14:
        return "VK_LOGIC_OP_NAND";
    case 15:
        return "VK_LOGIC_OP_SET";
    default:
        return "Unknown VkLogicOp value.";
    }
}

inline const char* VkInternalAllocationTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE";
    default:
        return "Unknown VkInternalAllocationType value.";
    }
}

inline const char* VkSystemAllocationScopeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND";
    case 1:
        return "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT";
    case 2:
        return "VK_SYSTEM_ALLOCATION_SCOPE_CACHE";
    case 3:
        return "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE";
    case 4:
        return "VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE";
    default:
        return "Unknown VkSystemAllocationScope value.";
    }
}

inline const char* VkPhysicalDeviceTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PHYSICAL_DEVICE_TYPE_OTHER";
    case 1:
        return "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU";
    case 2:
        return "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU";
    case 3:
        return "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU";
    case 4:
        return "VK_PHYSICAL_DEVICE_TYPE_CPU";
    default:
        return "Unknown VkPhysicalDeviceType value.";
    }
}

inline const char* VkVertexInputRateToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_VERTEX_INPUT_RATE_VERTEX";
    case 1:
        return "VK_VERTEX_INPUT_RATE_INSTANCE";
    default:
        return "Unknown VkVertexInputRate value.";
    }
}

inline const char* VkFormatToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_FORMAT_UNDEFINED";
    case 1:
        return "VK_FORMAT_R4G4_UNORM_PACK8";
    case 2:
        return "VK_FORMAT_R4G4B4A4_UNORM_PACK16";
    case 3:
        return "VK_FORMAT_B4G4R4A4_UNORM_PACK16";
    case 4:
        return "VK_FORMAT_R5G6B5_UNORM_PACK16";
    case 5:
        return "VK_FORMAT_B5G6R5_UNORM_PACK16";
    case 6:
        return "VK_FORMAT_R5G5B5A1_UNORM_PACK16";
    case 7:
        return "VK_FORMAT_B5G5R5A1_UNORM_PACK16";
    case 8:
        return "VK_FORMAT_A1R5G5B5_UNORM_PACK16";
    case 9:
        return "VK_FORMAT_R8_UNORM";
    case 10:
        return "VK_FORMAT_R8_SNORM";
    case 11:
        return "VK_FORMAT_R8_USCALED";
    case 12:
        return "VK_FORMAT_R8_SSCALED";
    case 13:
        return "VK_FORMAT_R8_UINT";
    case 14:
        return "VK_FORMAT_R8_SINT";
    case 15:
        return "VK_FORMAT_R8_SRGB";
    case 16:
        return "VK_FORMAT_R8G8_UNORM";
    case 17:
        return "VK_FORMAT_R8G8_SNORM";
    case 18:
        return "VK_FORMAT_R8G8_USCALED";
    case 19:
        return "VK_FORMAT_R8G8_SSCALED";
    case 20:
        return "VK_FORMAT_R8G8_UINT";
    case 21:
        return "VK_FORMAT_R8G8_SINT";
    case 22:
        return "VK_FORMAT_R8G8_SRGB";
    case 23:
        return "VK_FORMAT_R8G8B8_UNORM";
    case 24:
        return "VK_FORMAT_R8G8B8_SNORM";
    case 25:
        return "VK_FORMAT_R8G8B8_USCALED";
    case 26:
        return "VK_FORMAT_R8G8B8_SSCALED";
    case 27:
        return "VK_FORMAT_R8G8B8_UINT";
    case 28:
        return "VK_FORMAT_R8G8B8_SINT";
    case 29:
        return "VK_FORMAT_R8G8B8_SRGB";
    case 30:
        return "VK_FORMAT_B8G8R8_UNORM";
    case 31:
        return "VK_FORMAT_B8G8R8_SNORM";
    case 32:
        return "VK_FORMAT_B8G8R8_USCALED";
    case 33:
        return "VK_FORMAT_B8G8R8_SSCALED";
    case 34:
        return "VK_FORMAT_B8G8R8_UINT";
    case 35:
        return "VK_FORMAT_B8G8R8_SINT";
    case 36:
        return "VK_FORMAT_B8G8R8_SRGB";
    case 37:
        return "VK_FORMAT_R8G8B8A8_UNORM";
    case 38:
        return "VK_FORMAT_R8G8B8A8_SNORM";
    case 39:
        return "VK_FORMAT_R8G8B8A8_USCALED";
    case 40:
        return "VK_FORMAT_R8G8B8A8_SSCALED";
    case 41:
        return "VK_FORMAT_R8G8B8A8_UINT";
    case 42:
        return "VK_FORMAT_R8G8B8A8_SINT";
    case 43:
        return "VK_FORMAT_R8G8B8A8_SRGB";
    case 44:
        return "VK_FORMAT_B8G8R8A8_UNORM";
    case 45:
        return "VK_FORMAT_B8G8R8A8_SNORM";
    case 46:
        return "VK_FORMAT_B8G8R8A8_USCALED";
    case 47:
        return "VK_FORMAT_B8G8R8A8_SSCALED";
    case 48:
        return "VK_FORMAT_B8G8R8A8_UINT";
    case 49:
        return "VK_FORMAT_B8G8R8A8_SINT";
    case 50:
        return "VK_FORMAT_B8G8R8A8_SRGB";
    case 51:
        return "VK_FORMAT_A8B8G8R8_UNORM_PACK32";
    case 52:
        return "VK_FORMAT_A8B8G8R8_SNORM_PACK32";
    case 53:
        return "VK_FORMAT_A8B8G8R8_USCALED_PACK32";
    case 54:
        return "VK_FORMAT_A8B8G8R8_SSCALED_PACK32";
    case 55:
        return "VK_FORMAT_A8B8G8R8_UINT_PACK32";
    case 56:
        return "VK_FORMAT_A8B8G8R8_SINT_PACK32";
    case 57:
        return "VK_FORMAT_A8B8G8R8_SRGB_PACK32";
    case 58:
        return "VK_FORMAT_A2R10G10B10_UNORM_PACK32";
    case 59:
        return "VK_FORMAT_A2R10G10B10_SNORM_PACK32";
    case 60:
        return "VK_FORMAT_A2R10G10B10_USCALED_PACK32";
    case 61:
        return "VK_FORMAT_A2R10G10B10_SSCALED_PACK32";
    case 62:
        return "VK_FORMAT_A2R10G10B10_UINT_PACK32";
    case 63:
        return "VK_FORMAT_A2R10G10B10_SINT_PACK32";
    case 64:
        return "VK_FORMAT_A2B10G10R10_UNORM_PACK32";
    case 65:
        return "VK_FORMAT_A2B10G10R10_SNORM_PACK32";
    case 66:
        return "VK_FORMAT_A2B10G10R10_USCALED_PACK32";
    case 67:
        return "VK_FORMAT_A2B10G10R10_SSCALED_PACK32";
    case 68:
        return "VK_FORMAT_A2B10G10R10_UINT_PACK32";
    case 69:
        return "VK_FORMAT_A2B10G10R10_SINT_PACK32";
    case 70:
        return "VK_FORMAT_R16_UNORM";
    case 71:
        return "VK_FORMAT_R16_SNORM";
    case 72:
        return "VK_FORMAT_R16_USCALED";
    case 73:
        return "VK_FORMAT_R16_SSCALED";
    case 74:
        return "VK_FORMAT_R16_UINT";
    case 75:
        return "VK_FORMAT_R16_SINT";
    case 76:
        return "VK_FORMAT_R16_SFLOAT";
    case 77:
        return "VK_FORMAT_R16G16_UNORM";
    case 78:
        return "VK_FORMAT_R16G16_SNORM";
    case 79:
        return "VK_FORMAT_R16G16_USCALED";
    case 80:
        return "VK_FORMAT_R16G16_SSCALED";
    case 81:
        return "VK_FORMAT_R16G16_UINT";
    case 82:
        return "VK_FORMAT_R16G16_SINT";
    case 83:
        return "VK_FORMAT_R16G16_SFLOAT";
    case 84:
        return "VK_FORMAT_R16G16B16_UNORM";
    case 85:
        return "VK_FORMAT_R16G16B16_SNORM";
    case 86:
        return "VK_FORMAT_R16G16B16_USCALED";
    case 87:
        return "VK_FORMAT_R16G16B16_SSCALED";
    case 88:
        return "VK_FORMAT_R16G16B16_UINT";
    case 89:
        return "VK_FORMAT_R16G16B16_SINT";
    case 90:
        return "VK_FORMAT_R16G16B16_SFLOAT";
    case 91:
        return "VK_FORMAT_R16G16B16A16_UNORM";
    case 92:
        return "VK_FORMAT_R16G16B16A16_SNORM";
    case 93:
        return "VK_FORMAT_R16G16B16A16_USCALED";
    case 94:
        return "VK_FORMAT_R16G16B16A16_SSCALED";
    case 95:
        return "VK_FORMAT_R16G16B16A16_UINT";
    case 96:
        return "VK_FORMAT_R16G16B16A16_SINT";
    case 97:
        return "VK_FORMAT_R16G16B16A16_SFLOAT";
    case 98:
        return "VK_FORMAT_R32_UINT";
    case 99:
        return "VK_FORMAT_R32_SINT";
    case 100:
        return "VK_FORMAT_R32_SFLOAT";
    case 101:
        return "VK_FORMAT_R32G32_UINT";
    case 102:
        return "VK_FORMAT_R32G32_SINT";
    case 103:
        return "VK_FORMAT_R32G32_SFLOAT";
    case 104:
        return "VK_FORMAT_R32G32B32_UINT";
    case 105:
        return "VK_FORMAT_R32G32B32_SINT";
    case 106:
        return "VK_FORMAT_R32G32B32_SFLOAT";
    case 107:
        return "VK_FORMAT_R32G32B32A32_UINT";
    case 108:
        return "VK_FORMAT_R32G32B32A32_SINT";
    case 109:
        return "VK_FORMAT_R32G32B32A32_SFLOAT";
    case 110:
        return "VK_FORMAT_R64_UINT";
    case 111:
        return "VK_FORMAT_R64_SINT";
    case 112:
        return "VK_FORMAT_R64_SFLOAT";
    case 113:
        return "VK_FORMAT_R64G64_UINT";
    case 114:
        return "VK_FORMAT_R64G64_SINT";
    case 115:
        return "VK_FORMAT_R64G64_SFLOAT";
    case 116:
        return "VK_FORMAT_R64G64B64_UINT";
    case 117:
        return "VK_FORMAT_R64G64B64_SINT";
    case 118:
        return "VK_FORMAT_R64G64B64_SFLOAT";
    case 119:
        return "VK_FORMAT_R64G64B64A64_UINT";
    case 120:
        return "VK_FORMAT_R64G64B64A64_SINT";
    case 121:
        return "VK_FORMAT_R64G64B64A64_SFLOAT";
    case 122:
        return "VK_FORMAT_B10G11R11_UFLOAT_PACK32";
    case 123:
        return "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32";
    case 124:
        return "VK_FORMAT_D16_UNORM";
    case 125:
        return "VK_FORMAT_X8_D24_UNORM_PACK32";
    case 126:
        return "VK_FORMAT_D32_SFLOAT";
    case 127:
        return "VK_FORMAT_S8_UINT";
    case 128:
        return "VK_FORMAT_D16_UNORM_S8_UINT";
    case 129:
        return "VK_FORMAT_D24_UNORM_S8_UINT";
    case 130:
        return "VK_FORMAT_D32_SFLOAT_S8_UINT";
    case 131:
        return "VK_FORMAT_BC1_RGB_UNORM_BLOCK";
    case 132:
        return "VK_FORMAT_BC1_RGB_SRGB_BLOCK";
    case 133:
        return "VK_FORMAT_BC1_RGBA_UNORM_BLOCK";
    case 134:
        return "VK_FORMAT_BC1_RGBA_SRGB_BLOCK";
    case 135:
        return "VK_FORMAT_BC2_UNORM_BLOCK";
    case 136:
        return "VK_FORMAT_BC2_SRGB_BLOCK";
    case 137:
        return "VK_FORMAT_BC3_UNORM_BLOCK";
    case 138:
        return "VK_FORMAT_BC3_SRGB_BLOCK";
    case 139:
        return "VK_FORMAT_BC4_UNORM_BLOCK";
    case 140:
        return "VK_FORMAT_BC4_SNORM_BLOCK";
    case 141:
        return "VK_FORMAT_BC5_UNORM_BLOCK";
    case 142:
        return "VK_FORMAT_BC5_SNORM_BLOCK";
    case 143:
        return "VK_FORMAT_BC6H_UFLOAT_BLOCK";
    case 144:
        return "VK_FORMAT_BC6H_SFLOAT_BLOCK";
    case 145:
        return "VK_FORMAT_BC7_UNORM_BLOCK";
    case 146:
        return "VK_FORMAT_BC7_SRGB_BLOCK";
    case 147:
        return "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK";
    case 148:
        return "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK";
    case 149:
        return "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK";
    case 150:
        return "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK";
    case 151:
        return "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK";
    case 152:
        return "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK";
    case 153:
        return "VK_FORMAT_EAC_R11_UNORM_BLOCK";
    case 154:
        return "VK_FORMAT_EAC_R11_SNORM_BLOCK";
    case 155:
        return "VK_FORMAT_EAC_R11G11_UNORM_BLOCK";
    case 156:
        return "VK_FORMAT_EAC_R11G11_SNORM_BLOCK";
    case 157:
        return "VK_FORMAT_ASTC_4x4_UNORM_BLOCK";
    case 158:
        return "VK_FORMAT_ASTC_4x4_SRGB_BLOCK";
    case 159:
        return "VK_FORMAT_ASTC_5x4_UNORM_BLOCK";
    case 160:
        return "VK_FORMAT_ASTC_5x4_SRGB_BLOCK";
    case 161:
        return "VK_FORMAT_ASTC_5x5_UNORM_BLOCK";
    case 162:
        return "VK_FORMAT_ASTC_5x5_SRGB_BLOCK";
    case 163:
        return "VK_FORMAT_ASTC_6x5_UNORM_BLOCK";
    case 164:
        return "VK_FORMAT_ASTC_6x5_SRGB_BLOCK";
    case 165:
        return "VK_FORMAT_ASTC_6x6_UNORM_BLOCK";
    case 166:
        return "VK_FORMAT_ASTC_6x6_SRGB_BLOCK";
    case 167:
        return "VK_FORMAT_ASTC_8x5_UNORM_BLOCK";
    case 168:
        return "VK_FORMAT_ASTC_8x5_SRGB_BLOCK";
    case 169:
        return "VK_FORMAT_ASTC_8x6_UNORM_BLOCK";
    case 170:
        return "VK_FORMAT_ASTC_8x6_SRGB_BLOCK";
    case 171:
        return "VK_FORMAT_ASTC_8x8_UNORM_BLOCK";
    case 172:
        return "VK_FORMAT_ASTC_8x8_SRGB_BLOCK";
    case 173:
        return "VK_FORMAT_ASTC_10x5_UNORM_BLOCK";
    case 174:
        return "VK_FORMAT_ASTC_10x5_SRGB_BLOCK";
    case 175:
        return "VK_FORMAT_ASTC_10x6_UNORM_BLOCK";
    case 176:
        return "VK_FORMAT_ASTC_10x6_SRGB_BLOCK";
    case 177:
        return "VK_FORMAT_ASTC_10x8_UNORM_BLOCK";
    case 178:
        return "VK_FORMAT_ASTC_10x8_SRGB_BLOCK";
    case 179:
        return "VK_FORMAT_ASTC_10x10_UNORM_BLOCK";
    case 180:
        return "VK_FORMAT_ASTC_10x10_SRGB_BLOCK";
    case 181:
        return "VK_FORMAT_ASTC_12x10_UNORM_BLOCK";
    case 182:
        return "VK_FORMAT_ASTC_12x10_SRGB_BLOCK";
    case 183:
        return "VK_FORMAT_ASTC_12x12_UNORM_BLOCK";
    case 184:
        return "VK_FORMAT_ASTC_12x12_SRGB_BLOCK";
    default:
        return "Unknown VkFormat value.";
    }
}

inline const char* VkStructureTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_STRUCTURE_TYPE_APPLICATION_INFO";
    case 1:
        return "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO";
    case 2:
        return "VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO";
    case 3:
        return "VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO";
    case 4:
        return "VK_STRUCTURE_TYPE_SUBMIT_INFO";
    case 5:
        return "VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO";
    case 6:
        return "VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE";
    case 7:
        return "VK_STRUCTURE_TYPE_BIND_SPARSE_INFO";
    case 8:
        return "VK_STRUCTURE_TYPE_FENCE_CREATE_INFO";
    case 9:
        return "VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO";
    case 10:
        return "VK_STRUCTURE_TYPE_EVENT_CREATE_INFO";
    case 11:
        return "VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO";
    case 12:
        return "VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO";
    case 13:
        return "VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO";
    case 14:
        return "VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO";
    case 15:
        return "VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO";
    case 16:
        return "VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO";
    case 17:
        return "VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO";
    case 18:
        return "VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO";
    case 19:
        return "VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO";
    case 20:
        return "VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO";
    case 21:
        return "VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO";
    case 22:
        return "VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO";
    case 23:
        return "VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO";
    case 24:
        return "VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO";
    case 25:
        return "VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO";
    case 26:
        return "VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO";
    case 27:
        return "VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO";
    case 28:
        return "VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO";
    case 29:
        return "VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO";
    case 30:
        return "VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO";
    case 31:
        return "VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO";
    case 32:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO";
    case 33:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO";
    case 34:
        return "VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO";
    case 35:
        return "VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET";
    case 36:
        return "VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET";
    case 37:
        return "VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO";
    case 38:
        return "VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO";
    case 39:
        return "VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO";
    case 40:
        return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO";
    case 41:
        return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO";
    case 42:
        return "VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO";
    case 43:
        return "VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO";
    case 44:
        return "VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER";
    case 45:
        return "VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER";
    case 46:
        return "VK_STRUCTURE_TYPE_MEMORY_BARRIER";
    case 47:
        return "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO";
    case 48:
        return "VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO";
    default:
        return "Unknown VkStructureType value.";
    }
}

inline const char* VkSubpassContentsToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SUBPASS_CONTENTS_INLINE";
    case 1:
        return "VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS";
    default:
        return "Unknown VkSubpassContents value.";
    }
}

inline const char* VkResultToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SUCCESS";
    case 1:
        return "VK_NOT_READY";
    case 2:
        return "VK_TIMEOUT";
    case 3:
        return "VK_EVENT_SET";
    case 4:
        return "VK_EVENT_RESET";
    case 5:
        return "VK_INCOMPLETE";
    case -1:
        return "VK_ERROR_OUT_OF_HOST_MEMORY";
    case -2:
        return "VK_ERROR_OUT_OF_DEVICE_MEMORY";
    case -3:
        return "VK_ERROR_INITIALIZATION_FAILED";
    case -4:
        return "VK_ERROR_DEVICE_LOST";
    case -5:
        return "VK_ERROR_MEMORY_MAP_FAILED";
    case -6:
        return "VK_ERROR_LAYER_NOT_PRESENT";
    case -7:
        return "VK_ERROR_EXTENSION_NOT_PRESENT";
    case -8:
        return "VK_ERROR_FEATURE_NOT_PRESENT";
    case -9:
        return "VK_ERROR_INCOMPATIBLE_DRIVER";
    case -10:
        return "VK_ERROR_TOO_MANY_OBJECTS";
    case -11:
        return "VK_ERROR_FORMAT_NOT_SUPPORTED";
    case -12:
        return "VK_ERROR_FRAGMENTED_POOL";
    case -13:
        return "VK_ERROR_UNKNOWN";
    default:
        return "Unknown VkResult value.";
    }
}

inline const char* VkDynamicStateToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DYNAMIC_STATE_VIEWPORT";
    case 1:
        return "VK_DYNAMIC_STATE_SCISSOR";
    case 2:
        return "VK_DYNAMIC_STATE_LINE_WIDTH";
    case 3:
        return "VK_DYNAMIC_STATE_DEPTH_BIAS";
    case 4:
        return "VK_DYNAMIC_STATE_BLEND_CONSTANTS";
    case 5:
        return "VK_DYNAMIC_STATE_DEPTH_BOUNDS";
    case 6:
        return "VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK";
    case 7:
        return "VK_DYNAMIC_STATE_STENCIL_WRITE_MASK";
    case 8:
        return "VK_DYNAMIC_STATE_STENCIL_REFERENCE";
    default:
        return "Unknown VkDynamicState value.";
    }
}

inline const char* VkDescriptorUpdateTemplateTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET";
    default:
        return "Unknown VkDescriptorUpdateTemplateType value.";
    }
}

inline const char* VkObjectTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_OBJECT_TYPE_UNKNOWN";
    case 1:
        return "VK_OBJECT_TYPE_INSTANCE";
    case 2:
        return "VK_OBJECT_TYPE_PHYSICAL_DEVICE";
    case 3:
        return "VK_OBJECT_TYPE_DEVICE";
    case 4:
        return "VK_OBJECT_TYPE_QUEUE";
    case 5:
        return "VK_OBJECT_TYPE_SEMAPHORE";
    case 6:
        return "VK_OBJECT_TYPE_COMMAND_BUFFER";
    case 7:
        return "VK_OBJECT_TYPE_FENCE";
    case 8:
        return "VK_OBJECT_TYPE_DEVICE_MEMORY";
    case 9:
        return "VK_OBJECT_TYPE_BUFFER";
    case 10:
        return "VK_OBJECT_TYPE_IMAGE";
    case 11:
        return "VK_OBJECT_TYPE_EVENT";
    case 12:
        return "VK_OBJECT_TYPE_QUERY_POOL";
    case 13:
        return "VK_OBJECT_TYPE_BUFFER_VIEW";
    case 14:
        return "VK_OBJECT_TYPE_IMAGE_VIEW";
    case 15:
        return "VK_OBJECT_TYPE_SHADER_MODULE";
    case 16:
        return "VK_OBJECT_TYPE_PIPELINE_CACHE";
    case 17:
        return "VK_OBJECT_TYPE_PIPELINE_LAYOUT";
    case 18:
        return "VK_OBJECT_TYPE_RENDER_PASS";
    case 19:
        return "VK_OBJECT_TYPE_PIPELINE";
    case 20:
        return "VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT";
    case 21:
        return "VK_OBJECT_TYPE_SAMPLER";
    case 22:
        return "VK_OBJECT_TYPE_DESCRIPTOR_POOL";
    case 23:
        return "VK_OBJECT_TYPE_DESCRIPTOR_SET";
    case 24:
        return "VK_OBJECT_TYPE_FRAMEBUFFER";
    case 25:
        return "VK_OBJECT_TYPE_COMMAND_POOL";
    default:
        return "Unknown VkObjectType value.";
    }
}

inline const char* VkSemaphoreTypeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SEMAPHORE_TYPE_BINARY";
    case 1:
        return "VK_SEMAPHORE_TYPE_TIMELINE";
    default:
        return "Unknown VkSemaphoreType value.";
    }
}

inline const char* VkPresentModeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PRESENT_MODE_IMMEDIATE_KHR";
    case 1:
        return "VK_PRESENT_MODE_MAILBOX_KHR";
    case 2:
        return "VK_PRESENT_MODE_FIFO_KHR";
    case 3:
        return "VK_PRESENT_MODE_FIFO_RELAXED_KHR";
    default:
        return "Unknown VkPresentModeKHR value.";
    }
}

inline const char* VkColorSpaceKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR";
    default:
        return "Unknown VkColorSpaceKHR value.";
    }
}

inline const char* VkTimeDomainEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_TIME_DOMAIN_DEVICE_EXT";
    case 1:
        return "VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT";
    case 2:
        return "VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT";
    case 3:
        return "VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT";
    default:
        return "Unknown VkTimeDomainEXT value.";
    }
}

inline const char* VkDebugReportObjectTypeEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT";
    case 1:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT";
    case 2:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT";
    case 3:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT";
    case 4:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT";
    case 5:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT";
    case 6:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT";
    case 7:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT";
    case 8:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT";
    case 9:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT";
    case 10:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT";
    case 11:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT";
    case 12:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT";
    case 13:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT";
    case 14:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT";
    case 15:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT";
    case 16:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT";
    case 17:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT";
    case 18:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT";
    case 19:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT";
    case 20:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT";
    case 21:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT";
    case 22:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT";
    case 23:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT";
    case 24:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT";
    case 25:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT";
    case 26:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT";
    case 27:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT";
    case 28:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT";
    case 29:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT";
    case 30:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT";
    case 33:
        return "VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT";
    default:
        return "Unknown VkDebugReportObjectTypeEXT value.";
    }
}

inline const char* VkDeviceMemoryReportEventTypeEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT";
    case 1:
        return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT";
    case 2:
        return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT";
    case 3:
        return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT";
    case 4:
        return "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATION_FAILED_EXT";
    default:
        return "Unknown VkDeviceMemoryReportEventTypeEXT value.";
    }
}

inline const char* VkRasterizationOrderAMDToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_RASTERIZATION_ORDER_STRICT_AMD";
    case 1:
        return "VK_RASTERIZATION_ORDER_RELAXED_AMD";
    default:
        return "Unknown VkRasterizationOrderAMD value.";
    }
}

inline const char* VkValidationCheckEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_VALIDATION_CHECK_ALL_EXT";
    case 1:
        return "VK_VALIDATION_CHECK_SHADERS_EXT";
    default:
        return "Unknown VkValidationCheckEXT value.";
    }
}

inline const char* VkValidationFeatureEnableEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT";
    case 1:
        return "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT";
    case 2:
        return "VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT";
    case 3:
        return "VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT";
    case 4:
        return "VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT";
    default:
        return "Unknown VkValidationFeatureEnableEXT value.";
    }
}

inline const char* VkValidationFeatureDisableEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_VALIDATION_FEATURE_DISABLE_ALL_EXT";
    case 1:
        return "VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT";
    case 2:
        return "VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT";
    case 3:
        return "VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT";
    case 4:
        return "VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT";
    case 5:
        return "VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT";
    case 6:
        return "VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT";
    default:
        return "Unknown VkValidationFeatureDisableEXT value.";
    }
}

inline const char* VkIndirectCommandsTokenTypeNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV";
    case 1:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV";
    case 2:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV";
    case 3:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV";
    case 4:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV";
    case 5:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV";
    case 6:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV";
    case 7:
        return "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_TASKS_NV";
    default:
        return "Unknown VkIndirectCommandsTokenTypeNV value.";
    }
}

inline const char* VkDisplayPowerStateEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DISPLAY_POWER_STATE_OFF_EXT";
    case 1:
        return "VK_DISPLAY_POWER_STATE_SUSPEND_EXT";
    case 2:
        return "VK_DISPLAY_POWER_STATE_ON_EXT";
    default:
        return "Unknown VkDisplayPowerStateEXT value.";
    }
}

inline const char* VkDeviceEventTypeEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT";
    default:
        return "Unknown VkDeviceEventTypeEXT value.";
    }
}

inline const char* VkDisplayEventTypeEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT";
    default:
        return "Unknown VkDisplayEventTypeEXT value.";
    }
}

inline const char* VkViewportCoordinateSwizzleNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV";
    case 1:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV";
    case 2:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV";
    case 3:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV";
    case 4:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV";
    case 5:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV";
    case 6:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV";
    case 7:
        return "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV";
    default:
        return "Unknown VkViewportCoordinateSwizzleNV value.";
    }
}

inline const char* VkDiscardRectangleModeEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT";
    case 1:
        return "VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT";
    default:
        return "Unknown VkDiscardRectangleModeEXT value.";
    }
}

inline const char* VkPointClippingBehaviorToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES";
    case 1:
        return "VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY";
    default:
        return "Unknown VkPointClippingBehavior value.";
    }
}

inline const char* VkSamplerReductionModeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE";
    case 1:
        return "VK_SAMPLER_REDUCTION_MODE_MIN";
    case 2:
        return "VK_SAMPLER_REDUCTION_MODE_MAX";
    default:
        return "Unknown VkSamplerReductionMode value.";
    }
}

inline const char* VkTessellationDomainOriginToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT";
    case 1:
        return "VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT";
    default:
        return "Unknown VkTessellationDomainOrigin value.";
    }
}

inline const char* VkSamplerYcbcrModelConversionToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY";
    case 1:
        return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY";
    case 2:
        return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709";
    case 3:
        return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601";
    case 4:
        return "VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020";
    default:
        return "Unknown VkSamplerYcbcrModelConversion value.";
    }
}

inline const char* VkSamplerYcbcrRangeToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SAMPLER_YCBCR_RANGE_ITU_FULL";
    case 1:
        return "VK_SAMPLER_YCBCR_RANGE_ITU_NARROW";
    default:
        return "Unknown VkSamplerYcbcrRange value.";
    }
}

inline const char* VkChromaLocationToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_CHROMA_LOCATION_COSITED_EVEN";
    case 1:
        return "VK_CHROMA_LOCATION_MIDPOINT";
    default:
        return "Unknown VkChromaLocation value.";
    }
}

inline const char* VkBlendOverlapEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_BLEND_OVERLAP_UNCORRELATED_EXT";
    case 1:
        return "VK_BLEND_OVERLAP_DISJOINT_EXT";
    case 2:
        return "VK_BLEND_OVERLAP_CONJOINT_EXT";
    default:
        return "Unknown VkBlendOverlapEXT value.";
    }
}

inline const char* VkCoverageModulationModeNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COVERAGE_MODULATION_MODE_NONE_NV";
    case 1:
        return "VK_COVERAGE_MODULATION_MODE_RGB_NV";
    case 2:
        return "VK_COVERAGE_MODULATION_MODE_ALPHA_NV";
    case 3:
        return "VK_COVERAGE_MODULATION_MODE_RGBA_NV";
    default:
        return "Unknown VkCoverageModulationModeNV value.";
    }
}

inline const char* VkCoverageReductionModeNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COVERAGE_REDUCTION_MODE_MERGE_NV";
    case 1:
        return "VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV";
    default:
        return "Unknown VkCoverageReductionModeNV value.";
    }
}

inline const char* VkValidationCacheHeaderVersionEXTToString(int64_t value) {
    switch (value) {
    case 1:
        return "VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT";
    default:
        return "Unknown VkValidationCacheHeaderVersionEXT value.";
    }
}

inline const char* VkShaderInfoTypeAMDToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SHADER_INFO_TYPE_STATISTICS_AMD";
    case 1:
        return "VK_SHADER_INFO_TYPE_BINARY_AMD";
    case 2:
        return "VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD";
    default:
        return "Unknown VkShaderInfoTypeAMD value.";
    }
}

inline const char* VkQueueGlobalPriorityEXTToString(int64_t value) {
    switch (value) {
    case 128:
        return "VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT";
    case 256:
        return "VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT";
    case 512:
        return "VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT";
    case 1024:
        return "VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT";
    default:
        return "Unknown VkQueueGlobalPriorityEXT value.";
    }
}

inline const char* VkConservativeRasterizationModeEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT";
    case 1:
        return "VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT";
    case 2:
        return "VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT";
    default:
        return "Unknown VkConservativeRasterizationModeEXT value.";
    }
}

inline const char* VkVendorIdToString(int64_t value) {
    switch (value) {
    case 0x10001:
        return "VK_VENDOR_ID_VIV";
    case 0x10002:
        return "VK_VENDOR_ID_VSI";
    case 0x10003:
        return "VK_VENDOR_ID_KAZAN";
    case 0x10004:
        return "VK_VENDOR_ID_CODEPLAY";
    case 0x10005:
        return "VK_VENDOR_ID_MESA";
    default:
        return "Unknown VkVendorId value.";
    }
}

inline const char* VkDriverIdToString(int64_t value) {
    switch (value) {
    case 1:
        return "VK_DRIVER_ID_AMD_PROPRIETARY";
    case 2:
        return "VK_DRIVER_ID_AMD_OPEN_SOURCE";
    case 3:
        return "VK_DRIVER_ID_MESA_RADV";
    case 4:
        return "VK_DRIVER_ID_NVIDIA_PROPRIETARY";
    case 5:
        return "VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS";
    case 6:
        return "VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA";
    case 7:
        return "VK_DRIVER_ID_IMAGINATION_PROPRIETARY";
    case 8:
        return "VK_DRIVER_ID_QUALCOMM_PROPRIETARY";
    case 9:
        return "VK_DRIVER_ID_ARM_PROPRIETARY";
    case 10:
        return "VK_DRIVER_ID_GOOGLE_SWIFTSHADER";
    case 11:
        return "VK_DRIVER_ID_GGP_PROPRIETARY";
    case 12:
        return "VK_DRIVER_ID_BROADCOM_PROPRIETARY";
    case 13:
        return "VK_DRIVER_ID_MESA_LLVMPIPE";
    case 14:
        return "VK_DRIVER_ID_MOLTENVK";
    default:
        return "Unknown VkDriverId value.";
    }
}

inline const char* VkShadingRatePaletteEntryNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV";
    case 1:
        return "VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV";
    case 2:
        return "VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV";
    case 3:
        return "VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV";
    case 4:
        return "VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV";
    case 5:
        return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV";
    case 6:
        return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV";
    case 7:
        return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV";
    case 8:
        return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV";
    case 9:
        return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV";
    case 10:
        return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV";
    case 11:
        return "VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV";
    default:
        return "Unknown VkShadingRatePaletteEntryNV value.";
    }
}

inline const char* VkCoarseSampleOrderTypeNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV";
    case 1:
        return "VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV";
    case 2:
        return "VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV";
    case 3:
        return "VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV";
    default:
        return "Unknown VkCoarseSampleOrderTypeNV value.";
    }
}

inline const char* VkCopyAccelerationStructureModeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_KHR";
    case 1:
        return "VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR";
    case 2:
        return "VK_COPY_ACCELERATION_STRUCTURE_MODE_SERIALIZE_KHR";
    case 3:
        return "VK_COPY_ACCELERATION_STRUCTURE_MODE_DESERIALIZE_KHR";
    default:
        return "Unknown VkCopyAccelerationStructureModeKHR value.";
    }
}

inline const char* VkBuildAccelerationStructureModeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_BUILD_ACCELERATION_STRUCTURE_MODE_BUILD_KHR";
    case 1:
        return "VK_BUILD_ACCELERATION_STRUCTURE_MODE_UPDATE_KHR";
    default:
        return "Unknown VkBuildAccelerationStructureModeKHR value.";
    }
}

inline const char* VkAccelerationStructureTypeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR";
    case 1:
        return "VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR";
    case 2:
        return "VK_ACCELERATION_STRUCTURE_TYPE_GENERIC_KHR";
    default:
        return "Unknown VkAccelerationStructureTypeKHR value.";
    }
}

inline const char* VkGeometryTypeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_GEOMETRY_TYPE_TRIANGLES_KHR";
    case 1:
        return "VK_GEOMETRY_TYPE_AABBS_KHR";
    case 2:
        return "VK_GEOMETRY_TYPE_INSTANCES_KHR";
    default:
        return "Unknown VkGeometryTypeKHR value.";
    }
}

inline const char* VkAccelerationStructureMemoryRequirementsTypeNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV";
    case 1:
        return "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV";
    case 2:
        return "VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV";
    default:
        return "Unknown VkAccelerationStructureMemoryRequirementsTypeNV value.";
    }
}

inline const char* VkAccelerationStructureBuildTypeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_KHR";
    case 1:
        return "VK_ACCELERATION_STRUCTURE_BUILD_TYPE_DEVICE_KHR";
    case 2:
        return "VK_ACCELERATION_STRUCTURE_BUILD_TYPE_HOST_OR_DEVICE_KHR";
    default:
        return "Unknown VkAccelerationStructureBuildTypeKHR value.";
    }
}

inline const char* VkRayTracingShaderGroupTypeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR";
    case 1:
        return "VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR";
    case 2:
        return "VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR";
    default:
        return "Unknown VkRayTracingShaderGroupTypeKHR value.";
    }
}

inline const char* VkAccelerationStructureCompatibilityKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_ACCELERATION_STRUCTURE_COMPATIBILITY_COMPATIBLE_KHR";
    case 1:
        return "VK_ACCELERATION_STRUCTURE_COMPATIBILITY_INCOMPATIBLE_KHR";
    default:
        return "Unknown VkAccelerationStructureCompatibilityKHR value.";
    }
}

inline const char* VkShaderGroupShaderKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SHADER_GROUP_SHADER_GENERAL_KHR";
    case 1:
        return "VK_SHADER_GROUP_SHADER_CLOSEST_HIT_KHR";
    case 2:
        return "VK_SHADER_GROUP_SHADER_ANY_HIT_KHR";
    case 3:
        return "VK_SHADER_GROUP_SHADER_INTERSECTION_KHR";
    default:
        return "Unknown VkShaderGroupShaderKHR value.";
    }
}

inline const char* VkMemoryOverallocationBehaviorAMDToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD";
    case 1:
        return "VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD";
    case 2:
        return "VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD";
    default:
        return "Unknown VkMemoryOverallocationBehaviorAMD value.";
    }
}

inline const char* VkScopeNVToString(int64_t value) {
    switch (value) {
    case 1:
        return "VK_SCOPE_DEVICE_NV";
    case 2:
        return "VK_SCOPE_WORKGROUP_NV";
    case 3:
        return "VK_SCOPE_SUBGROUP_NV";
    case 5:
        return "VK_SCOPE_QUEUE_FAMILY_NV";
    default:
        return "Unknown VkScopeNV value.";
    }
}

inline const char* VkComponentTypeNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_COMPONENT_TYPE_FLOAT16_NV";
    case 1:
        return "VK_COMPONENT_TYPE_FLOAT32_NV";
    case 2:
        return "VK_COMPONENT_TYPE_FLOAT64_NV";
    case 3:
        return "VK_COMPONENT_TYPE_SINT8_NV";
    case 4:
        return "VK_COMPONENT_TYPE_SINT16_NV";
    case 5:
        return "VK_COMPONENT_TYPE_SINT32_NV";
    case 6:
        return "VK_COMPONENT_TYPE_SINT64_NV";
    case 7:
        return "VK_COMPONENT_TYPE_UINT8_NV";
    case 8:
        return "VK_COMPONENT_TYPE_UINT16_NV";
    case 9:
        return "VK_COMPONENT_TYPE_UINT32_NV";
    case 10:
        return "VK_COMPONENT_TYPE_UINT64_NV";
    default:
        return "Unknown VkComponentTypeNV value.";
    }
}

inline const char* VkFullScreenExclusiveEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT";
    case 1:
        return "VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT";
    case 2:
        return "VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT";
    case 3:
        return "VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT";
    default:
        return "Unknown VkFullScreenExclusiveEXT value.";
    }
}

inline const char* VkPerformanceCounterScopeKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR";
    case 1:
        return "VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR";
    case 2:
        return "VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR";
    default:
        return "Unknown VkPerformanceCounterScopeKHR value.";
    }
}

inline const char* VkPerformanceCounterUnitKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PERFORMANCE_COUNTER_UNIT_GENERIC_KHR";
    case 1:
        return "VK_PERFORMANCE_COUNTER_UNIT_PERCENTAGE_KHR";
    case 2:
        return "VK_PERFORMANCE_COUNTER_UNIT_NANOSECONDS_KHR";
    case 3:
        return "VK_PERFORMANCE_COUNTER_UNIT_BYTES_KHR";
    case 4:
        return "VK_PERFORMANCE_COUNTER_UNIT_BYTES_PER_SECOND_KHR";
    case 5:
        return "VK_PERFORMANCE_COUNTER_UNIT_KELVIN_KHR";
    case 6:
        return "VK_PERFORMANCE_COUNTER_UNIT_WATTS_KHR";
    case 7:
        return "VK_PERFORMANCE_COUNTER_UNIT_VOLTS_KHR";
    case 8:
        return "VK_PERFORMANCE_COUNTER_UNIT_AMPS_KHR";
    case 9:
        return "VK_PERFORMANCE_COUNTER_UNIT_HERTZ_KHR";
    case 10:
        return "VK_PERFORMANCE_COUNTER_UNIT_CYCLES_KHR";
    default:
        return "Unknown VkPerformanceCounterUnitKHR value.";
    }
}

inline const char* VkPerformanceCounterStorageKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR";
    case 1:
        return "VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR";
    case 2:
        return "VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR";
    case 3:
        return "VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR";
    case 4:
        return "VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR";
    case 5:
        return "VK_PERFORMANCE_COUNTER_STORAGE_FLOAT64_KHR";
    default:
        return "Unknown VkPerformanceCounterStorageKHR value.";
    }
}

inline const char* VkPerformanceConfigurationTypeINTELToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL";
    default:
        return "Unknown VkPerformanceConfigurationTypeINTEL value.";
    }
}

inline const char* VkQueryPoolSamplingModeINTELToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL";
    default:
        return "Unknown VkQueryPoolSamplingModeINTEL value.";
    }
}

inline const char* VkPerformanceOverrideTypeINTELToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL";
    case 1:
        return "VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL";
    default:
        return "Unknown VkPerformanceOverrideTypeINTEL value.";
    }
}

inline const char* VkPerformanceParameterTypeINTELToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL";
    case 1:
        return "VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL";
    default:
        return "Unknown VkPerformanceParameterTypeINTEL value.";
    }
}

inline const char* VkPerformanceValueTypeINTELToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL";
    case 1:
        return "VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL";
    case 2:
        return "VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL";
    case 3:
        return "VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL";
    case 4:
        return "VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL";
    default:
        return "Unknown VkPerformanceValueTypeINTEL value.";
    }
}

inline const char* VkShaderFloatControlsIndependenceToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY";
    case 1:
        return "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL";
    case 2:
        return "VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE";
    default:
        return "Unknown VkShaderFloatControlsIndependence value.";
    }
}

inline const char* VkPipelineExecutableStatisticFormatKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR";
    case 1:
        return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR";
    case 2:
        return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR";
    case 3:
        return "VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR";
    default:
        return "Unknown VkPipelineExecutableStatisticFormatKHR value.";
    }
}

inline const char* VkLineRasterizationModeEXTToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT";
    case 1:
        return "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT";
    case 2:
        return "VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT";
    case 3:
        return "VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT";
    default:
        return "Unknown VkLineRasterizationModeEXT value.";
    }
}

inline const char* VkFragmentShadingRateCombinerOpKHRToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_KHR";
    case 1:
        return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_KHR";
    case 2:
        return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_KHR";
    case 3:
        return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_KHR";
    case 4:
        return "VK_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_KHR";
    default:
        return "Unknown VkFragmentShadingRateCombinerOpKHR value.";
    }
}

inline const char* VkFragmentShadingRateNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV";
    case 1:
        return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV";
    case 4:
        return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV";
    case 5:
        return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV";
    case 6:
        return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV";
    case 9:
        return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV";
    case 10:
        return "VK_FRAGMENT_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV";
    case 11:
        return "VK_FRAGMENT_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV";
    case 12:
        return "VK_FRAGMENT_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV";
    case 13:
        return "VK_FRAGMENT_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV";
    case 14:
        return "VK_FRAGMENT_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV";
    case 15:
        return "VK_FRAGMENT_SHADING_RATE_NO_INVOCATIONS_NV";
    default:
        return "Unknown VkFragmentShadingRateNV value.";
    }
}

inline const char* VkFragmentShadingRateTypeNVToString(int64_t value) {
    switch (value) {
    case 0:
        return "VK_FRAGMENT_SHADING_RATE_TYPE_FRAGMENT_SIZE_NV";
    case 1:
        return "VK_FRAGMENT_SHADING_RATE_TYPE_ENUMS_NV";
    default:
        return "Unknown VkFragmentShadingRateTypeNV value.";
    }
}

