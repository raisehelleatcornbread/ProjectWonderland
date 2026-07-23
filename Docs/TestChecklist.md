# Sprint 1 Manual Test Checklist

## Build checks

- [ ] Addon Builder completes without configuration errors.
- [ ] The built PBO is named `Wonderland_Framework.pbo`.
- [ ] The test mod folder contains the PBO under `@Wonderland_Framework\Addons`.

## Server startup checks

- [ ] Server starts with `-mod=@Wonderland_Framework`.
- [ ] No `Script Error` references `WN_` classes.
- [ ] The log contains `[Wonderland][INFO] Wonderland Framework 0.1.0-alpha initializing.`
- [ ] The log contains `[Wonderland][INFO] Default server configuration created.` on first launch, or `Server configuration loaded.` on later launches.
- [ ] The log contains `Module registered: Bootstrap`.
- [ ] The log contains `Bootstrap module verification succeeded.`
- [ ] The log contains `Framework ready. Registered modules: 1`.

## Persistence checks

- [ ] Confirm `WonderlandFramework\ServerConfig.json` is created in the server profile directory.
- [ ] Restart the server and confirm the config is loaded rather than recreated.

## Shutdown check

- [ ] Stop the server normally.
- [ ] Confirm the log contains `Framework shutting down.` and `Module unloaded: Bootstrap`.

## Result

Record the DayZ version, DayZ Tools version, server type, and any script/configuration error before starting Sprint 2.
