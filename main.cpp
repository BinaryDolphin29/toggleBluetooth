﻿#include "pch.h"

using namespace winrt;
using namespace Windows::Devices::Radios;
using namespace Windows::Devices::Bluetooth;

int main() {
    winrt::init_apartment();

    BluetoothAdapter bAdapter = BluetoothAdapter::GetDefaultAsync().get();
    Radio radio = bAdapter.GetRadioAsync().get();

    radio.SetStateAsync(radio.State() == RadioState::On ?
        RadioState::Off : RadioState::On).get();
}