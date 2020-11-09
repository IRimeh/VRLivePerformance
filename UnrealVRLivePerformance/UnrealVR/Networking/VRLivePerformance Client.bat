@echo off
set ip_address_string="IPv4 Address"
rem Uncomment the following line when using older versions of Windows without IPv6 support (by removing "rem")
rem set ip_address_string="IP Address"
echo Network Connection Test
for /f "usebackq tokens=2 delims=:" %%f in (`ipconfig ^| findstr /c:%ip_address_string%`) do "C:\Program Files\Epic Games\UE_4.25\Engine\Binaries\Win64\UE4Editor.exe" "C:\Users\Student 2020\Documents\VRLivePerformance\UnrealVRLivePerformance\UnrealVR\UnrealVR.uproject" %%f -game -windowed

