========================================================================
    CONSOLE APPLICATION : DoubleCleanup Project Overview
========================================================================


Use appverif tool to catch double free

Launch appveriftool and enable it for DoubleCleanup. (appverif.exe)

Or using gflags tools, enable application verification for this binary.
>> !gflag  (will show the nt global flag)

This will set a bit in the GlobalFlag Image File Execution Options (IFEO) registry
value for the target executable image.

Launch application in windbg and an extra dll (verifier.dll), should be loaded

The idea behind verifier checks that are introduced is to update the import table entries
corresponding to a few common Win32 API calls. So if you call TerminateProcess,
which will call NtTerminateProcess, this will instead first call AVrfpNtTerminateProcess
and then NtTerminateProcess.

>>!avrf   (to view verifier flags)

