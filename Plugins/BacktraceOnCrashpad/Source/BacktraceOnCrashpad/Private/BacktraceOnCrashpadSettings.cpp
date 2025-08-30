#include "BacktraceOnCrashpadSettings.h"

UBacktraceOnCrashpadSettings::UBacktraceOnCrashpadSettings() {
    this->BacktraceURL = TEXT("https://submit.backtrace.io/segaamerica/6800d817142ca0001cb9d225da78209ca353bd68a5eec3e3019c041dfa35d8bb/minidump");
    this->BacktraceToken = TEXT("6800d817142ca0001cb9d225da78209ca353bd68a5eec3e3019c041dfa35d8bb");
    this->CrashpadDatabasePath = TEXT("%APPDATA%/SEGA/SonicRacingCrossWorldsONT/Steam/crashpad_db");
}


