#pragma once

#include "../IRenderer.h"

namespace fc
{
	class RendererD3D12 : public IRenderer
	{
	public:
		virtual bool Initialize(void* windowHandle) override;
		virtual bool Finalize() override;

		virtual void OnResized() override;

		virtual void Draw(float dt) override;
	};
}