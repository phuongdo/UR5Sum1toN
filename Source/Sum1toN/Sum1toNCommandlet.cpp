#include "Sum1toNCommandlet.h"
#include "Misc/Parse.h"

USum1toNCommandlet::USum1toNCommandlet()
{
    IsClient = false;
    IsEditor = false;
    LogToConsole = true;
}
int32 USum1toNCommandlet::Main(const FString& Params)
{
    int32 N = 0;
    if (!FParse::Value(*Params, TEXT("N="), N))
    {
        UE_LOG(LogTemp, Error, TEXT("Missing or invalid parameter: -N=<integer>"));
        return 1;
    }
    int64 Total = int64(N) * (N + 1ll) / 2ll;
    UE_LOG(LogTemp, Display, TEXT("Sum of 1→%d is %lld"), N, Total);

    // Corrected line—no embedded newline in the macro:
    GLog->Logf(TEXT("Sum of 1→%d is %lld\n"), N, Total);

    return 0;
}
