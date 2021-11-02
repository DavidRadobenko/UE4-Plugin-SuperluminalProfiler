#pragma once

#include "PerformanceAPI.h"
#include "ProfilingDebugging/ExternalProfiler.h"

class SUPERLUMINALPROFILER_API FSuperluminalProfiler : public IModuleInterface, public FExternalProfiler
{
	virtual void StartupModule() override
	{
		// Register as a modular feature
		IModularFeatures::Get().RegisterModularFeature( FExternalProfiler::GetFeatureName(), this );
	}
	virtual void ShutdownModule() override
	{
		IModularFeatures::Get().UnregisterModularFeature( FExternalProfiler::GetFeatureName(), this );
	}
	
public:
    
	/** Mark where the profiler should consider the frame boundary to be. */
	virtual void FrameSync()
	{
        
	}

	/** Pauses profiling. */
	virtual void ProfilerPauseFunction()
	{
        
	}

	/** Resumes profiling. */
	virtual void ProfilerResumeFunction()
	{
        
	}

	/** Gets the name of this profiler as a string.  This is used to allow the user to select this profiler in a system configuration file or on the command-line */
	virtual const TCHAR* GetProfilerName() const
	{
		return TEXT( "Superluminal" );
	}

	virtual void StartScopedEvent(const TCHAR* Text) override
	{
		FString TextString(Text);
		if (TextString.Contains("UWorld_Tick"))
		{
			PerformanceAPI::EndEvent();
			PerformanceAPI::BeginEvent(Text);
		}
	}
};
