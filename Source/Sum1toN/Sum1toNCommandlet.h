#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "Sum1toNCommandlet.generated.h"

/**
 * USum1toNCommandlet
 *   - Parses an integer N from the command-line (-N=123)
 *   - Computes Sum = N*(N+1)/2
 *   - Prints result to the log/stdout
 */
UCLASS()
class USum1toNCommandlet : public UCommandlet
{
    GENERATED_BODY()
public:
    USum1toNCommandlet();
    virtual int32 Main(const FString& Params) override;
};
