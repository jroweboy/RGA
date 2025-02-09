#pragma once

#include <string>

#include <RadeonGPUAnalyzerBackend/Include/beDataTypes.h>

// Logging callback type.
typedef void(*LoggingCallBackFunc_t)(const std::string&);

// Type of Vulkan input file.
enum class rgVulkanInputType
{
    Unknown,
    Glsl,
    Hlsl,
    Spirv,
    SpirvTxt
};

// Types of entry points.
enum class rgEntryType
{
    Unknown,
    OpenCL_Kernel,
    DX_Vertex,
    DX_Hull,
    DX_Domain,
    DX_Geometry,
    DX_Pixel,
    DX_Compute,
    GL_Vertex,
    GL_TessControl,
    GL_TessEval,
    GL_Geometry,
    GL_Fragment,
    GL_Compute
};

// Structure that contains entry type and names of all output files generated by RGA.
struct rgOutputFiles
{
    rgEntryType  m_entryType = rgEntryType::Unknown;
    std::string  m_inputFile;
    std::string  m_device;
    std::string  m_isaFile;
    std::string  m_binFile;
    std::string  m_isaCsvFile;
    std::string  m_statFile;
    std::string  m_liveregFile;
    std::string  m_cfgFile;
    bool         m_isBinFileTemp = false;
    bool         m_isIsaFileTemp = false;
    bool         m_status = true;

    rgOutputFiles() = default;
    rgOutputFiles(const std::string& device) : m_device(device), m_isBinFileTemp(false), m_isIsaFileTemp(false), m_status(true) {}
    rgOutputFiles(rgEntryType type, const std::string& isaFile, const std::string& binFile = "", const std::string& isaCsvFile = "",
                  const std::string& statFile = "", const std::string& liveregFile = "", const std::string& cfgFile = "")
        : m_isaFile(isaFile), m_binFile(binFile), m_isaCsvFile(isaCsvFile), m_statFile(statFile),
          m_liveregFile(liveregFile), m_cfgFile(cfgFile), m_entryType(type) {}
};

// OpenCL output metadata. Maps  pair{device, kernel} --> OutputFiles structure.
typedef  std::map<std::pair<std::string, std::string>, struct rgOutputFiles>  rgCLOutputMetadata;

// Vulkan output metadata: an array of per-stage OutputFiles structures.
typedef std::array<struct rgOutputFiles, bePipelineStage::Count>  rgVkOutputMetadata;

// Vector of tuples {entry_name, start_src_line, end_src_line}
typedef  std::vector<std::tuple<std::string, int, int>>  rgEntryData;

// Maps source file name to vector of kernel names found in this source file and corresponding line numbers.
typedef  std::map<std::string, rgEntryData>   rgFileEntryData;
