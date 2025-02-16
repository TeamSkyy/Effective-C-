// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220531.1

#pragma once
#ifndef WINRT_Windows_Gaming_Input_Preview_H
#define WINRT_Windows_Gaming_Input_Preview_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220531.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220531.1"
#include "winrt/Windows.Gaming.Input.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Gaming.Input.2.h"
#include "winrt/impl/Windows.Gaming.Input.Custom.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>::GetParentProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics)->GetParentProviderId(*(void**)(&provider), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>::GetProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics)->GetProviderId(*(void**)(&provider), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::BatteryChargingState() const
    {
        winrt::Windows::Gaming::Input::Preview::GameControllerBatteryChargingState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->get_BatteryChargingState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::BatteryKind() const
    {
        winrt::Windows::Gaming::Input::Preview::GameControllerBatteryKind value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->get_BatteryKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::BatteryLevel() const
    {
        winrt::Windows::Gaming::Input::Preview::GameControllerBatteryLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->get_BatteryLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::GetDeviceFirmwareCorruptionState() const
    {
        winrt::Windows::Gaming::Input::Preview::GameControllerFirmwareCorruptReason value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->GetDeviceFirmwareCorruptionState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::IsFirmwareCorrupted() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->get_IsFirmwareCorrupted(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::IsInterfaceSupported(winrt::guid const& interfaceId) const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->IsInterfaceSupported(impl::bind_in(interfaceId), &value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::IsSyntheticDevice() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->get_IsSyntheticDevice(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::PreferredTypes() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->get_PreferredTypes(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::ExecuteCommand(winrt::Windows::Gaming::Input::Preview::DeviceCommand const& command) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->ExecuteCommand(static_cast<int32_t>(command)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::SetHomeLedIntensity(uint8_t intensity) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->SetHomeLedIntensity(intensity));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::GetExtendedDeviceInfo() const
    {
        uint32_t buffer_impl_size{};
        uint8_t* buffer{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->GetExtendedDeviceInfo(&buffer_impl_size, &buffer));
        return com_array<uint8_t>{ buffer, buffer_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::SetHeadsetOperation(winrt::Windows::Gaming::Input::Preview::HeadsetOperation const& operation, array_view<uint8_t const> buffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->SetHeadsetOperation(static_cast<int32_t>(operation), buffer.size(), get_abi(buffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::GetHeadsetOperation(winrt::Windows::Gaming::Input::Preview::HeadsetOperation const& operation) const
    {
        uint32_t buffer_impl_size{};
        uint8_t* buffer{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->GetHeadsetOperation(static_cast<int32_t>(operation), &buffer_impl_size, &buffer));
        return com_array<uint8_t>{ buffer, buffer_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::AppCompatVersion() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->get_AppCompatVersion(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::SetStandardControllerButtonRemapping(winrt::Windows::System::User const& user, bool previous, param::map_view<winrt::Windows::Gaming::Input::Preview::RemappingButtonCategory, winrt::Windows::Foundation::IInspectable> const& remapping) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->SetStandardControllerButtonRemapping(*(void**)(&user), previous, *(void**)(&remapping)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>::GetStandardControllerButtonRemapping(winrt::Windows::System::User const& user, bool previous) const
    {
        void* remapping{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider)->GetStandardControllerButtonRemapping(*(void**)(&user), previous, &remapping));
        return winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Gaming::Input::Preview::RemappingButtonCategory, winrt::Windows::Foundation::IInspectable>{ remapping, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>::FromGameController(winrt::Windows::Gaming::Input::IGameController const& controller) const
    {
        void* legacyGipGameControllerProvider{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics)->FromGameController(*(void**)(&controller), &legacyGipGameControllerProvider));
        return winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider{ legacyGipGameControllerProvider, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>::FromGameControllerProvider(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
    {
        void* legacyGipGameControllerProvider{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics)->FromGameControllerProvider(*(void**)(&provider), &legacyGipGameControllerProvider));
        return winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider{ legacyGipGameControllerProvider, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>::PairPilotToCopilot(winrt::Windows::System::User const& user, param::hstring const& pilotControllerProviderId, param::hstring const& copilotControllerProviderId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics)->PairPilotToCopilot(*(void**)(&user), *(void**)(&pilotControllerProviderId), *(void**)(&copilotControllerProviderId)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>::ClearPairing(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics)->ClearPairing(*(void**)(&user), *(void**)(&controllerProviderId)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>::IsPilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId) const
    {
        void* copilotControllerProviderId{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics)->IsPilot(*(void**)(&user), *(void**)(&controllerProviderId), &copilotControllerProviderId));
        return hstring{ copilotControllerProviderId, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>::IsCopilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId) const
    {
        void* pilotControllerProviderId{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics)->IsCopilot(*(void**)(&user), *(void**)(&controllerProviderId), &pilotControllerProviderId));
        return hstring{ pilotControllerProviderId, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> : produce_base<D, winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        int32_t __stdcall GetParentProviderId(void* provider, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetParentProviderId(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProviderId(void* provider, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetProviderId(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider> : produce_base<D, winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        int32_t __stdcall get_BatteryChargingState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryChargingState>(this->shim().BatteryChargingState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BatteryKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryKind>(this->shim().BatteryKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BatteryLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryLevel>(this->shim().BatteryLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeviceFirmwareCorruptionState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Input::Preview::GameControllerFirmwareCorruptReason>(this->shim().GetDeviceFirmwareCorruptionState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFirmwareCorrupted(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFirmwareCorrupted());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsInterfaceSupported(winrt::guid interfaceId, bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInterfaceSupported(*reinterpret_cast<winrt::guid const*>(&interfaceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSyntheticDevice(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSyntheticDevice());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PreferredTypes(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().PreferredTypes());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ExecuteCommand(int32_t command) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExecuteCommand(*reinterpret_cast<winrt::Windows::Gaming::Input::Preview::DeviceCommand const*>(&command));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetHomeLedIntensity(uint8_t intensity) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHomeLedIntensity(intensity);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetExtendedDeviceInfo(uint32_t* __bufferSize, uint8_t** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            std::tie(*__bufferSize, *buffer) = detach_abi(this->shim().GetExtendedDeviceInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetHeadsetOperation(int32_t operation, uint32_t __bufferSize, uint8_t* buffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHeadsetOperation(*reinterpret_cast<winrt::Windows::Gaming::Input::Preview::HeadsetOperation const*>(&operation), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(buffer), reinterpret_cast<uint8_t const *>(buffer) + __bufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetHeadsetOperation(int32_t operation, uint32_t* __bufferSize, uint8_t** buffer) noexcept final try
        {
            clear_abi(buffer);
            typename D::abi_guard guard(this->shim());
            std::tie(*__bufferSize, *buffer) = detach_abi(this->shim().GetHeadsetOperation(*reinterpret_cast<winrt::Windows::Gaming::Input::Preview::HeadsetOperation const*>(&operation)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppCompatVersion(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().AppCompatVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetStandardControllerButtonRemapping(void* user, bool previous, void* remapping) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStandardControllerButtonRemapping(*reinterpret_cast<winrt::Windows::System::User const*>(&user), previous, *reinterpret_cast<winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Gaming::Input::Preview::RemappingButtonCategory, winrt::Windows::Foundation::IInspectable> const*>(&remapping));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetStandardControllerButtonRemapping(void* user, bool previous, void** remapping) noexcept final try
        {
            clear_abi(remapping);
            typename D::abi_guard guard(this->shim());
            *remapping = detach_from<winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Gaming::Input::Preview::RemappingButtonCategory, winrt::Windows::Foundation::IInspectable>>(this->shim().GetStandardControllerButtonRemapping(*reinterpret_cast<winrt::Windows::System::User const*>(&user), previous));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics> : produce_base<D, winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        int32_t __stdcall FromGameController(void* controller, void** legacyGipGameControllerProvider) noexcept final try
        {
            clear_abi(legacyGipGameControllerProvider);
            typename D::abi_guard guard(this->shim());
            *legacyGipGameControllerProvider = detach_from<winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider>(this->shim().FromGameController(*reinterpret_cast<winrt::Windows::Gaming::Input::IGameController const*>(&controller)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FromGameControllerProvider(void* provider, void** legacyGipGameControllerProvider) noexcept final try
        {
            clear_abi(legacyGipGameControllerProvider);
            typename D::abi_guard guard(this->shim());
            *legacyGipGameControllerProvider = detach_from<winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider>(this->shim().FromGameControllerProvider(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PairPilotToCopilot(void* user, void* pilotControllerProviderId, void* copilotControllerProviderId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PairPilotToCopilot(*reinterpret_cast<winrt::Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&pilotControllerProviderId), *reinterpret_cast<hstring const*>(&copilotControllerProviderId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ClearPairing(void* user, void* controllerProviderId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearPairing(*reinterpret_cast<winrt::Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&controllerProviderId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPilot(void* user, void* controllerProviderId, void** copilotControllerProviderId) noexcept final try
        {
            clear_abi(copilotControllerProviderId);
            typename D::abi_guard guard(this->shim());
            *copilotControllerProviderId = detach_from<hstring>(this->shim().IsPilot(*reinterpret_cast<winrt::Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&controllerProviderId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCopilot(void* user, void* controllerProviderId, void** pilotControllerProviderId) noexcept final try
        {
            clear_abi(pilotControllerProviderId);
            typename D::abi_guard guard(this->shim());
            *pilotControllerProviderId = detach_from<hstring>(this->shim().IsCopilot(*reinterpret_cast<winrt::Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&controllerProviderId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Preview
{
    inline auto GameControllerProviderInfo::GetParentProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider)
    {
        return impl::call_factory<GameControllerProviderInfo, IGameControllerProviderInfoStatics>([&](IGameControllerProviderInfoStatics const& f) { return f.GetParentProviderId(provider); });
    }
    inline auto GameControllerProviderInfo::GetProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider)
    {
        return impl::call_factory<GameControllerProviderInfo, IGameControllerProviderInfoStatics>([&](IGameControllerProviderInfoStatics const& f) { return f.GetProviderId(provider); });
    }
    inline auto LegacyGipGameControllerProvider::FromGameController(winrt::Windows::Gaming::Input::IGameController const& controller)
    {
        return impl::call_factory<LegacyGipGameControllerProvider, ILegacyGipGameControllerProviderStatics>([&](ILegacyGipGameControllerProviderStatics const& f) { return f.FromGameController(controller); });
    }
    inline auto LegacyGipGameControllerProvider::FromGameControllerProvider(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider)
    {
        return impl::call_factory<LegacyGipGameControllerProvider, ILegacyGipGameControllerProviderStatics>([&](ILegacyGipGameControllerProviderStatics const& f) { return f.FromGameControllerProvider(provider); });
    }
    inline auto LegacyGipGameControllerProvider::PairPilotToCopilot(winrt::Windows::System::User const& user, param::hstring const& pilotControllerProviderId, param::hstring const& copilotControllerProviderId)
    {
        impl::call_factory<LegacyGipGameControllerProvider, ILegacyGipGameControllerProviderStatics>([&](ILegacyGipGameControllerProviderStatics const& f) { return f.PairPilotToCopilot(user, pilotControllerProviderId, copilotControllerProviderId); });
    }
    inline auto LegacyGipGameControllerProvider::ClearPairing(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId)
    {
        impl::call_factory<LegacyGipGameControllerProvider, ILegacyGipGameControllerProviderStatics>([&](ILegacyGipGameControllerProviderStatics const& f) { return f.ClearPairing(user, controllerProviderId); });
    }
    inline auto LegacyGipGameControllerProvider::IsPilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId)
    {
        return impl::call_factory<LegacyGipGameControllerProvider, ILegacyGipGameControllerProviderStatics>([&](ILegacyGipGameControllerProviderStatics const& f) { return f.IsPilot(user, controllerProviderId); });
    }
    inline auto LegacyGipGameControllerProvider::IsCopilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId)
    {
        return impl::call_factory<LegacyGipGameControllerProvider, ILegacyGipGameControllerProviderStatics>([&](ILegacyGipGameControllerProviderStatics const& f) { return f.IsCopilot(user, controllerProviderId); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Preview::GameControllerProviderInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
