﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once
#include "winrt/impl/Microsoft.Graphics.Canvas.Brushes.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Effects.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Geometry.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Svg.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.Text.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Input.Inking.1.h"
#include "winrt/impl/Windows.Graphics.Effects.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Microsoft.Graphics.Canvas.1.h"

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Microsoft::Graphics::Canvas {

struct WINRT_EBO CanvasActiveLayer :
    Microsoft::Graphics::Canvas::ICanvasActiveLayer
{
    CanvasActiveLayer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasBitmap :
    Microsoft::Graphics::Canvas::ICanvasBitmap,
    impl::base<CanvasBitmap, Windows::UI::Xaml::DependencyObject>,
    impl::require<CanvasBitmap, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    CanvasBitmap(std::nullptr_t) noexcept {}
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<uint8_t const> bytes, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromBytes(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IBuffer const& buffer, int32_t widthInPixels, int32_t heightInPixels, Windows::Graphics::DirectX::DirectXPixelFormat const& format, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromColors(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, array_view<Windows::UI::Color const> colors, int32_t widthInPixels, int32_t heightInPixels, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Microsoft::Graphics::Canvas::CanvasBitmap CreateFromSoftwareBitmap(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::Imaging::SoftwareBitmap const& sourceBitmap);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
};

struct WINRT_EBO CanvasCommandList :
    Microsoft::Graphics::Canvas::ICanvasCommandList
{
    CanvasCommandList(std::nullptr_t) noexcept {}
    CanvasCommandList(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator);
};

struct WINRT_EBO CanvasDevice :
    Microsoft::Graphics::Canvas::ICanvasDevice
{
    CanvasDevice(std::nullptr_t) noexcept {}
    CanvasDevice();
    CanvasDevice(bool forceSoftwareRenderer);
    static Microsoft::Graphics::Canvas::CanvasDevice CreateFromDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& direct3DDevice);
    static Microsoft::Graphics::Canvas::CanvasDevice GetSharedDevice();
    static Microsoft::Graphics::Canvas::CanvasDevice GetSharedDevice(bool forceSoftwareRenderer);
    static void DebugLevel(Microsoft::Graphics::Canvas::CanvasDebugLevel const& value);
    static Microsoft::Graphics::Canvas::CanvasDebugLevel DebugLevel();
};

struct WINRT_EBO CanvasDrawingSession :
    Microsoft::Graphics::Canvas::ICanvasDrawingSession
{
    CanvasDrawingSession(std::nullptr_t) noexcept {}
};

struct CanvasImage
{
    CanvasImage() = delete;
    static Windows::Foundation::IAsyncAction SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat);
    static Windows::Foundation::IAsyncAction SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality);
    static Windows::Foundation::IAsyncAction SaveAsync(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, float dpi, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasBitmapFileFormat const& fileFormat, float quality, Microsoft::Graphics::Canvas::CanvasBufferPrecision const& bufferPrecision);
    static com_array<float> ComputeHistogram(Microsoft::Graphics::Canvas::ICanvasImage const& image, Windows::Foundation::Rect const& sourceRectangle, Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Microsoft::Graphics::Canvas::Effects::EffectChannelSelect const& channelSelect, int32_t numberOfBins);
    static bool IsHistogramSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device);
};

struct WINRT_EBO CanvasLock :
    Microsoft::Graphics::Canvas::ICanvasLock,
    impl::require<CanvasLock, Windows::Foundation::IClosable>
{
    CanvasLock(std::nullptr_t) noexcept {}
};

struct WINRT_EBO CanvasRenderTarget :
    Microsoft::Graphics::Canvas::ICanvasRenderTarget,
    impl::base<CanvasRenderTarget, Microsoft::Graphics::Canvas::CanvasBitmap, Windows::UI::Xaml::DependencyObject>,
    impl::require<CanvasRenderTarget, Microsoft::Graphics::Canvas::ICanvasBitmap, Microsoft::Graphics::Canvas::ICanvasImage, Microsoft::Graphics::Canvas::ICanvasResourceCreator, Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi, Windows::Foundation::IClosable, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface, Windows::Graphics::Effects::IGraphicsEffectSource, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    CanvasRenderTarget(std::nullptr_t) noexcept {}
    CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size);
    CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height);
    CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi);
    CanvasRenderTarget(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Microsoft::Graphics::Canvas::CanvasRenderTarget CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
    static Microsoft::Graphics::Canvas::CanvasRenderTarget CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi);
    static Microsoft::Graphics::Canvas::CanvasRenderTarget CreateFromDirect3D11Surface(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, float dpi, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
};

struct WINRT_EBO CanvasSpriteBatch :
    Microsoft::Graphics::Canvas::ICanvasSpriteBatch
{
    CanvasSpriteBatch(std::nullptr_t) noexcept {}
    static bool IsSupported(Microsoft::Graphics::Canvas::CanvasDevice const& device);
};

struct WINRT_EBO CanvasSwapChain :
    Microsoft::Graphics::Canvas::ICanvasSwapChain
{
    CanvasSwapChain(std::nullptr_t) noexcept {}
    CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, Windows::Foundation::Size const& size);
    CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreatorWithDpi const& resourceCreator, float width, float height);
    CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi);
    CanvasSwapChain(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alphaMode);
    static Microsoft::Graphics::Canvas::CanvasSwapChain CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float dpi);
    static Microsoft::Graphics::Canvas::CanvasSwapChain CreateForCoreWindow(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::UI::Core::CoreWindow const& coreWindow, float width, float height, float dpi, Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t bufferCount);
};

struct WINRT_EBO CanvasVirtualBitmap :
    Microsoft::Graphics::Canvas::ICanvasVirtualBitmap
{
    CanvasVirtualBitmap(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, param::hstring const& fileName, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Foundation::Uri const& uri, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options);
    static Windows::Foundation::IAsyncOperation<Microsoft::Graphics::Canvas::CanvasVirtualBitmap> LoadAsync(Microsoft::Graphics::Canvas::ICanvasResourceCreator const& resourceCreator, Windows::Storage::Streams::IRandomAccessStream const& stream, Microsoft::Graphics::Canvas::CanvasVirtualBitmapOptions const& options, Microsoft::Graphics::Canvas::CanvasAlphaMode const& alpha);
};

}
