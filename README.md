# UE4-Plugin-SuperluminalProfiler

Add this flag -Superluminal so the Engine uses the External Profiler from the Plugin.
For the Superluminal Instrumentation View I only made "UWorld_Tick" available.

Tested with UE4.27

### Source View

If the Source View inside the Superluminal Profiler is not visible for your Binary Engine Build, 
a message should appear in the Source View that no Source is available for that binary. There should
be a Browse button where you can set the correct path to the source file. 
After that, every other engine source file should be automatically have the corrected path to the engines source folder.

### Disclosure
Used the plugin here as a reference https://github.com/kitelightning/SuperluminalPlugin
I updated it so the Superluminal Instrumentation View would only show the UWorld_Tick event.