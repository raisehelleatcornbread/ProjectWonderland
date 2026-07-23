# Sprint 1 Architecture

```text
MissionServer
  └─ WN_Framework singleton
       ├─ WN_ConfigManager → profile JSON configuration
       └─ WN_ModuleManager
            └─ WN_BootstrapModule (test module)
```

`MissionServer` starts and stops the framework only on the server. Future gameplay modules should derive from `WN_Module` and be registered through `WN_ModuleManager`. Client UI and networking are intentionally outside this first sprint.

The framework does not depend on Expansion or another gameplay framework.
