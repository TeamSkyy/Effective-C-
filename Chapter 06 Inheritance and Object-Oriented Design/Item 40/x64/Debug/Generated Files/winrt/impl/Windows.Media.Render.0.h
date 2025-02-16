// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Windows_Media_Render_0_H
#define WINRT_Windows_Media_Render_0_H
WINRT_EXPORT namespace winrt::Windows::Media::Render
{
    enum class AudioRenderCategory : int32_t
    {
        Other = 0,
        ForegroundOnlyMedia = 1,
        BackgroundCapableMedia = 2,
        Communications = 3,
        Alerts = 4,
        SoundEffects = 5,
        GameEffects = 6,
        GameMedia = 7,
        GameChat = 8,
        Speech = 9,
        Movie = 10,
        Media = 11,
    };
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Media::Render::AudioRenderCategory>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Media::Render::AudioRenderCategory> = L"Windows.Media.Render.AudioRenderCategory";
}
#endif
