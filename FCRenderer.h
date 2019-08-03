#pragma once


namespace fc
{
	class IRenderer;
	enum class RendererType {
		D3D12
	};
	IRenderer* InitRenderer(RendererType type, void* windowHandle);
};


