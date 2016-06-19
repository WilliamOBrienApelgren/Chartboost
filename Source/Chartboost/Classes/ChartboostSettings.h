//
//  Created by Derek van Vliet on 2014-12-10.
//  Copyright (c) 2015 Get Set Games Inc. All rights reserved.
//

#pragma once

#include "ChartboostSettings.generated.h"

UCLASS(config = Engine, defaultconfig)
class UChartboostSettings : public UObject
{
	GENERATED_BODY()
	
public:
	UChartboostSettings(const FObjectInitializer& ObjectInitializer);
	
	// General

	UPROPERTY(Config, EditAnywhere, Category = App, meta = (DisplayName = "App Id"))
	FString AppId;

	UPROPERTY(Config, EditAnywhere, Category = App, meta = (DisplayName = "App Signature"))
	FString AppSignature;
	
	UPROPERTY(Config, EditAnywhere, Category=General, meta=(DisplayName="Auto Cache Ads"))
	bool AutoCacheAds;
	
	UPROPERTY(Config, EditAnywhere, Category=General, meta=(DisplayName="Request Interstitials in First Session"))
	bool FirstSessionInterstitials;
	
	UPROPERTY(Config, EditAnywhere, Category=General, meta=(DisplayName="Display Loading View for More Apps"))
	bool MoreAppsLoadingView;
	
	UPROPERTY(Config, EditAnywhere, Category=General, meta=(DisplayName="Prefetch Video Content"))
	bool PrefetchVideoContent;
	
	UPROPERTY(Config, EditAnywhere, Category=General, meta=(DisplayName="Pause for Age Gate"))
	bool PauseForAgeGate;	
};
