/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
m_vk.destroyInstance													= (DestroyInstanceFunc)													GET_PROC_ADDR("vkDestroyInstance");
m_vk.enumeratePhysicalDevices											= (EnumeratePhysicalDevicesFunc)										GET_PROC_ADDR("vkEnumeratePhysicalDevices");
m_vk.getPhysicalDeviceFeatures											= (GetPhysicalDeviceFeaturesFunc)										GET_PROC_ADDR("vkGetPhysicalDeviceFeatures");
m_vk.getPhysicalDeviceFormatProperties									= (GetPhysicalDeviceFormatPropertiesFunc)								GET_PROC_ADDR("vkGetPhysicalDeviceFormatProperties");
m_vk.getPhysicalDeviceImageFormatProperties								= (GetPhysicalDeviceImageFormatPropertiesFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceImageFormatProperties");
m_vk.getPhysicalDeviceProperties										= (GetPhysicalDevicePropertiesFunc)										GET_PROC_ADDR("vkGetPhysicalDeviceProperties");
m_vk.getPhysicalDeviceQueueFamilyProperties								= (GetPhysicalDeviceQueueFamilyPropertiesFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceQueueFamilyProperties");
m_vk.getPhysicalDeviceMemoryProperties									= (GetPhysicalDeviceMemoryPropertiesFunc)								GET_PROC_ADDR("vkGetPhysicalDeviceMemoryProperties");
m_vk.createDevice														= (CreateDeviceFunc)													GET_PROC_ADDR("vkCreateDevice");
m_vk.enumerateDeviceExtensionProperties									= (EnumerateDeviceExtensionPropertiesFunc)								GET_PROC_ADDR("vkEnumerateDeviceExtensionProperties");
m_vk.enumerateDeviceLayerProperties										= (EnumerateDeviceLayerPropertiesFunc)									GET_PROC_ADDR("vkEnumerateDeviceLayerProperties");
m_vk.getPhysicalDeviceSparseImageFormatProperties						= (GetPhysicalDeviceSparseImageFormatPropertiesFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceSparseImageFormatProperties");
m_vk.enumeratePhysicalDeviceGroups										= (EnumeratePhysicalDeviceGroupsFunc)									GET_PROC_ADDR("vkEnumeratePhysicalDeviceGroups");
if (!m_vk.enumeratePhysicalDeviceGroups)
	m_vk.enumeratePhysicalDeviceGroups									= (EnumeratePhysicalDeviceGroupsFunc)									GET_PROC_ADDR("vkEnumeratePhysicalDeviceGroupsKHR");
m_vk.getPhysicalDeviceFeatures2											= (GetPhysicalDeviceFeatures2Func)										GET_PROC_ADDR("vkGetPhysicalDeviceFeatures2");
if (!m_vk.getPhysicalDeviceFeatures2)
	m_vk.getPhysicalDeviceFeatures2										= (GetPhysicalDeviceFeatures2Func)										GET_PROC_ADDR("vkGetPhysicalDeviceFeatures2KHR");
m_vk.getPhysicalDeviceProperties2										= (GetPhysicalDeviceProperties2Func)									GET_PROC_ADDR("vkGetPhysicalDeviceProperties2");
if (!m_vk.getPhysicalDeviceProperties2)
	m_vk.getPhysicalDeviceProperties2									= (GetPhysicalDeviceProperties2Func)									GET_PROC_ADDR("vkGetPhysicalDeviceProperties2KHR");
m_vk.getPhysicalDeviceFormatProperties2									= (GetPhysicalDeviceFormatProperties2Func)								GET_PROC_ADDR("vkGetPhysicalDeviceFormatProperties2");
if (!m_vk.getPhysicalDeviceFormatProperties2)
	m_vk.getPhysicalDeviceFormatProperties2								= (GetPhysicalDeviceFormatProperties2Func)								GET_PROC_ADDR("vkGetPhysicalDeviceFormatProperties2KHR");
m_vk.getPhysicalDeviceImageFormatProperties2							= (GetPhysicalDeviceImageFormatProperties2Func)							GET_PROC_ADDR("vkGetPhysicalDeviceImageFormatProperties2");
if (!m_vk.getPhysicalDeviceImageFormatProperties2)
	m_vk.getPhysicalDeviceImageFormatProperties2						= (GetPhysicalDeviceImageFormatProperties2Func)							GET_PROC_ADDR("vkGetPhysicalDeviceImageFormatProperties2KHR");
m_vk.getPhysicalDeviceQueueFamilyProperties2							= (GetPhysicalDeviceQueueFamilyProperties2Func)							GET_PROC_ADDR("vkGetPhysicalDeviceQueueFamilyProperties2");
if (!m_vk.getPhysicalDeviceQueueFamilyProperties2)
	m_vk.getPhysicalDeviceQueueFamilyProperties2						= (GetPhysicalDeviceQueueFamilyProperties2Func)							GET_PROC_ADDR("vkGetPhysicalDeviceQueueFamilyProperties2KHR");
m_vk.getPhysicalDeviceMemoryProperties2									= (GetPhysicalDeviceMemoryProperties2Func)								GET_PROC_ADDR("vkGetPhysicalDeviceMemoryProperties2");
if (!m_vk.getPhysicalDeviceMemoryProperties2)
	m_vk.getPhysicalDeviceMemoryProperties2								= (GetPhysicalDeviceMemoryProperties2Func)								GET_PROC_ADDR("vkGetPhysicalDeviceMemoryProperties2KHR");
m_vk.getPhysicalDeviceSparseImageFormatProperties2						= (GetPhysicalDeviceSparseImageFormatProperties2Func)					GET_PROC_ADDR("vkGetPhysicalDeviceSparseImageFormatProperties2");
if (!m_vk.getPhysicalDeviceSparseImageFormatProperties2)
	m_vk.getPhysicalDeviceSparseImageFormatProperties2					= (GetPhysicalDeviceSparseImageFormatProperties2Func)					GET_PROC_ADDR("vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
m_vk.getPhysicalDeviceExternalBufferProperties							= (GetPhysicalDeviceExternalBufferPropertiesFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceExternalBufferProperties");
if (!m_vk.getPhysicalDeviceExternalBufferProperties)
	m_vk.getPhysicalDeviceExternalBufferProperties						= (GetPhysicalDeviceExternalBufferPropertiesFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceExternalBufferPropertiesKHR");
m_vk.getPhysicalDeviceExternalFenceProperties							= (GetPhysicalDeviceExternalFencePropertiesFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceExternalFenceProperties");
if (!m_vk.getPhysicalDeviceExternalFenceProperties)
	m_vk.getPhysicalDeviceExternalFenceProperties						= (GetPhysicalDeviceExternalFencePropertiesFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceExternalFencePropertiesKHR");
m_vk.getPhysicalDeviceExternalSemaphoreProperties						= (GetPhysicalDeviceExternalSemaphorePropertiesFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceExternalSemaphoreProperties");
if (!m_vk.getPhysicalDeviceExternalSemaphoreProperties)
	m_vk.getPhysicalDeviceExternalSemaphoreProperties					= (GetPhysicalDeviceExternalSemaphorePropertiesFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
m_vk.destroySurfaceKHR													= (DestroySurfaceKHRFunc)												GET_PROC_ADDR("vkDestroySurfaceKHR");
m_vk.getPhysicalDeviceSurfaceSupportKHR									= (GetPhysicalDeviceSurfaceSupportKHRFunc)								GET_PROC_ADDR("vkGetPhysicalDeviceSurfaceSupportKHR");
m_vk.getPhysicalDeviceSurfaceCapabilitiesKHR							= (GetPhysicalDeviceSurfaceCapabilitiesKHRFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
m_vk.getPhysicalDeviceSurfaceFormatsKHR									= (GetPhysicalDeviceSurfaceFormatsKHRFunc)								GET_PROC_ADDR("vkGetPhysicalDeviceSurfaceFormatsKHR");
m_vk.getPhysicalDeviceSurfacePresentModesKHR							= (GetPhysicalDeviceSurfacePresentModesKHRFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceSurfacePresentModesKHR");
m_vk.getPhysicalDevicePresentRectanglesKHR								= (GetPhysicalDevicePresentRectanglesKHRFunc)							GET_PROC_ADDR("vkGetPhysicalDevicePresentRectanglesKHR");
m_vk.getPhysicalDeviceDisplayPropertiesKHR								= (GetPhysicalDeviceDisplayPropertiesKHRFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceDisplayPropertiesKHR");
m_vk.getPhysicalDeviceDisplayPlanePropertiesKHR							= (GetPhysicalDeviceDisplayPlanePropertiesKHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
m_vk.getDisplayPlaneSupportedDisplaysKHR								= (GetDisplayPlaneSupportedDisplaysKHRFunc)								GET_PROC_ADDR("vkGetDisplayPlaneSupportedDisplaysKHR");
m_vk.getDisplayModePropertiesKHR										= (GetDisplayModePropertiesKHRFunc)										GET_PROC_ADDR("vkGetDisplayModePropertiesKHR");
m_vk.createDisplayModeKHR												= (CreateDisplayModeKHRFunc)											GET_PROC_ADDR("vkCreateDisplayModeKHR");
m_vk.getDisplayPlaneCapabilitiesKHR										= (GetDisplayPlaneCapabilitiesKHRFunc)									GET_PROC_ADDR("vkGetDisplayPlaneCapabilitiesKHR");
m_vk.createDisplayPlaneSurfaceKHR										= (CreateDisplayPlaneSurfaceKHRFunc)									GET_PROC_ADDR("vkCreateDisplayPlaneSurfaceKHR");
m_vk.getPhysicalDeviceFeatures2KHR										= (GetPhysicalDeviceFeatures2KHRFunc)									GET_PROC_ADDR("vkGetPhysicalDeviceFeatures2KHR");
m_vk.getPhysicalDeviceProperties2KHR									= (GetPhysicalDeviceProperties2KHRFunc)									GET_PROC_ADDR("vkGetPhysicalDeviceProperties2KHR");
m_vk.getPhysicalDeviceFormatProperties2KHR								= (GetPhysicalDeviceFormatProperties2KHRFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceFormatProperties2KHR");
m_vk.getPhysicalDeviceImageFormatProperties2KHR							= (GetPhysicalDeviceImageFormatProperties2KHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceImageFormatProperties2KHR");
m_vk.getPhysicalDeviceQueueFamilyProperties2KHR							= (GetPhysicalDeviceQueueFamilyProperties2KHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceQueueFamilyProperties2KHR");
m_vk.getPhysicalDeviceMemoryProperties2KHR								= (GetPhysicalDeviceMemoryProperties2KHRFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceMemoryProperties2KHR");
m_vk.getPhysicalDeviceSparseImageFormatProperties2KHR					= (GetPhysicalDeviceSparseImageFormatProperties2KHRFunc)				GET_PROC_ADDR("vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
m_vk.getPhysicalDeviceExternalBufferPropertiesKHR						= (GetPhysicalDeviceExternalBufferPropertiesKHRFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceExternalBufferPropertiesKHR");
m_vk.getPhysicalDeviceExternalSemaphorePropertiesKHR					= (GetPhysicalDeviceExternalSemaphorePropertiesKHRFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
m_vk.getPhysicalDeviceExternalFencePropertiesKHR						= (GetPhysicalDeviceExternalFencePropertiesKHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceExternalFencePropertiesKHR");
m_vk.enumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR		= (EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHRFunc)	GET_PROC_ADDR("vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
m_vk.getPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR				= (GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHRFunc)			GET_PROC_ADDR("vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
m_vk.getPhysicalDeviceSurfaceCapabilities2KHR							= (GetPhysicalDeviceSurfaceCapabilities2KHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceSurfaceCapabilities2KHR");
m_vk.getPhysicalDeviceSurfaceFormats2KHR								= (GetPhysicalDeviceSurfaceFormats2KHRFunc)								GET_PROC_ADDR("vkGetPhysicalDeviceSurfaceFormats2KHR");
m_vk.getPhysicalDeviceDisplayProperties2KHR								= (GetPhysicalDeviceDisplayProperties2KHRFunc)							GET_PROC_ADDR("vkGetPhysicalDeviceDisplayProperties2KHR");
m_vk.getPhysicalDeviceDisplayPlaneProperties2KHR						= (GetPhysicalDeviceDisplayPlaneProperties2KHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
m_vk.getDisplayModeProperties2KHR										= (GetDisplayModeProperties2KHRFunc)									GET_PROC_ADDR("vkGetDisplayModeProperties2KHR");
m_vk.getDisplayPlaneCapabilities2KHR									= (GetDisplayPlaneCapabilities2KHRFunc)									GET_PROC_ADDR("vkGetDisplayPlaneCapabilities2KHR");
m_vk.createDebugReportCallbackEXT										= (CreateDebugReportCallbackEXTFunc)									GET_PROC_ADDR("vkCreateDebugReportCallbackEXT");
m_vk.destroyDebugReportCallbackEXT										= (DestroyDebugReportCallbackEXTFunc)									GET_PROC_ADDR("vkDestroyDebugReportCallbackEXT");
m_vk.debugReportMessageEXT												= (DebugReportMessageEXTFunc)											GET_PROC_ADDR("vkDebugReportMessageEXT");
m_vk.getPhysicalDeviceExternalImageFormatPropertiesNV					= (GetPhysicalDeviceExternalImageFormatPropertiesNVFunc)				GET_PROC_ADDR("vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
m_vk.getPhysicalDeviceGeneratedCommandsPropertiesNVX					= (GetPhysicalDeviceGeneratedCommandsPropertiesNVXFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX");
m_vk.releaseDisplayEXT													= (ReleaseDisplayEXTFunc)												GET_PROC_ADDR("vkReleaseDisplayEXT");
m_vk.getPhysicalDeviceSurfaceCapabilities2EXT							= (GetPhysicalDeviceSurfaceCapabilities2EXTFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceSurfaceCapabilities2EXT");
m_vk.createDebugUtilsMessengerEXT										= (CreateDebugUtilsMessengerEXTFunc)									GET_PROC_ADDR("vkCreateDebugUtilsMessengerEXT");
m_vk.destroyDebugUtilsMessengerEXT										= (DestroyDebugUtilsMessengerEXTFunc)									GET_PROC_ADDR("vkDestroyDebugUtilsMessengerEXT");
m_vk.submitDebugUtilsMessageEXT											= (SubmitDebugUtilsMessageEXTFunc)										GET_PROC_ADDR("vkSubmitDebugUtilsMessageEXT");
m_vk.getPhysicalDeviceMultisamplePropertiesEXT							= (GetPhysicalDeviceMultisamplePropertiesEXTFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceMultisamplePropertiesEXT");
m_vk.getPhysicalDeviceCalibrateableTimeDomainsEXT						= (GetPhysicalDeviceCalibrateableTimeDomainsEXTFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
m_vk.getPhysicalDeviceToolPropertiesEXT									= (GetPhysicalDeviceToolPropertiesEXTFunc)								GET_PROC_ADDR("vkGetPhysicalDeviceToolPropertiesEXT");
m_vk.getPhysicalDeviceCooperativeMatrixPropertiesNV						= (GetPhysicalDeviceCooperativeMatrixPropertiesNVFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
m_vk.getPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV	= (GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNVFunc)	GET_PROC_ADDR("vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
m_vk.createHeadlessSurfaceEXT											= (CreateHeadlessSurfaceEXTFunc)										GET_PROC_ADDR("vkCreateHeadlessSurfaceEXT");
m_vk.createAndroidSurfaceKHR											= (CreateAndroidSurfaceKHRFunc)											GET_PROC_ADDR("vkCreateAndroidSurfaceKHR");
m_vk.createImagePipeSurfaceFUCHSIA										= (CreateImagePipeSurfaceFUCHSIAFunc)									GET_PROC_ADDR("vkCreateImagePipeSurfaceFUCHSIA");
m_vk.createStreamDescriptorSurfaceGGP									= (CreateStreamDescriptorSurfaceGGPFunc)								GET_PROC_ADDR("vkCreateStreamDescriptorSurfaceGGP");
m_vk.createIOSSurfaceMVK												= (CreateIOSSurfaceMVKFunc)												GET_PROC_ADDR("vkCreateIOSSurfaceMVK");
m_vk.createMacOSSurfaceMVK												= (CreateMacOSSurfaceMVKFunc)											GET_PROC_ADDR("vkCreateMacOSSurfaceMVK");
m_vk.createMetalSurfaceEXT												= (CreateMetalSurfaceEXTFunc)											GET_PROC_ADDR("vkCreateMetalSurfaceEXT");
m_vk.createViSurfaceNN													= (CreateViSurfaceNNFunc)												GET_PROC_ADDR("vkCreateViSurfaceNN");
m_vk.createWaylandSurfaceKHR											= (CreateWaylandSurfaceKHRFunc)											GET_PROC_ADDR("vkCreateWaylandSurfaceKHR");
m_vk.getPhysicalDeviceWaylandPresentationSupportKHR						= (GetPhysicalDeviceWaylandPresentationSupportKHRFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceWaylandPresentationSupportKHR");
m_vk.createWin32SurfaceKHR												= (CreateWin32SurfaceKHRFunc)											GET_PROC_ADDR("vkCreateWin32SurfaceKHR");
m_vk.getPhysicalDeviceWin32PresentationSupportKHR						= (GetPhysicalDeviceWin32PresentationSupportKHRFunc)					GET_PROC_ADDR("vkGetPhysicalDeviceWin32PresentationSupportKHR");
m_vk.getPhysicalDeviceSurfacePresentModes2EXT							= (GetPhysicalDeviceSurfacePresentModes2EXTFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceSurfacePresentModes2EXT");
m_vk.createXcbSurfaceKHR												= (CreateXcbSurfaceKHRFunc)												GET_PROC_ADDR("vkCreateXcbSurfaceKHR");
m_vk.getPhysicalDeviceXcbPresentationSupportKHR							= (GetPhysicalDeviceXcbPresentationSupportKHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceXcbPresentationSupportKHR");
m_vk.createXlibSurfaceKHR												= (CreateXlibSurfaceKHRFunc)											GET_PROC_ADDR("vkCreateXlibSurfaceKHR");
m_vk.getPhysicalDeviceXlibPresentationSupportKHR						= (GetPhysicalDeviceXlibPresentationSupportKHRFunc)						GET_PROC_ADDR("vkGetPhysicalDeviceXlibPresentationSupportKHR");
m_vk.acquireXlibDisplayEXT												= (AcquireXlibDisplayEXTFunc)											GET_PROC_ADDR("vkAcquireXlibDisplayEXT");
m_vk.getRandROutputDisplayEXT											= (GetRandROutputDisplayEXTFunc)										GET_PROC_ADDR("vkGetRandROutputDisplayEXT");
