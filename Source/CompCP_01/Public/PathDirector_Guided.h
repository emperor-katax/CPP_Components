#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/TargetPoint.h"
#include "PathDirector_Guided.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FImpact_02);

// C++ Delegates
// https://docs.unrealengine.com/en-US/Programming/UnrealArchitecture/Delegates/index.html
// https://answers.unrealengine.com/questions/259969/blueprint-implementable-custom-component-events.html
// https://answers.unrealengine.com/questions/697849/creating-an-event-on-an-actorcomponent-in-c-for-bl.html
// Delegate type declarations must start with "F" character and recomended to have a "unique name"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COMPCP_01_API UPathDirector_Guided : public UActorComponent{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPathDirector_Guided();

	// set up varibale and move object
	UFUNCTION(BlueprintCallable, Category = "Path Director")
		void SetupValues(ATargetPoint* target_Point, float move_Speed);

	// impact event 
	UPROPERTY(BlueprintAssignable, Category = "Path Director")
		FImpact_02 OnImpact;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
private:

	ATargetPoint* TargetPoint;
	float Speed = 500.f;

	FVector temp_01 = FVector(FVector::ZeroVector);
	float temp_02 = 0.f;

	bool Active = false;
	bool impact = false;
	FVector Target = FVector(FVector::ZeroVector);

	void Move();
		
};
