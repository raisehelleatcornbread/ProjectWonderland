# Build Guide — Sprint 1

## Prerequisites

- DayZ and DayZ Tools installed through Steam.
- A local P: drive prepared with DayZ Workbench (`P:\`).
- A local or dedicated DayZ server for testing.

## 1. Put the source on P:

Copy the repository's `Wonderland_Framework` folder to:

```text
P:\Wonderland_Framework
```

The addon configuration is at:

```text
P:\Wonderland_Framework\config.cpp
```

## 2. Build the addon

Open **DayZ Tools → Addon Builder**.

- Source directory: `P:\Wonderland_Framework`
- Destination directory: a clean temporary folder, for example `C:\DayZBuild\Wonderland_Framework\Addons`
- Enable binarization only after the unbinarized build succeeds; Sprint 1 contains scripts and can be tested without asset binarization.
- Build the PBO.

The output should include `Wonderland_Framework.pbo` in the destination `Addons` directory. This source folder contains both `config.cpp` and `Scripts`, so Addon Builder includes the bootstrap scripts in the PBO.

## 3. Assemble the test mod

Create this folder beside your DayZ server executable:

```text
@Wonderland_Framework\
  Addons\
    Wonderland_Framework.pbo
  mod.cpp
  meta.cpp
```

Copy `mod.cpp` and `meta.cpp` from the repository's `Wonderland_Framework` directory into `@Wonderland_Framework`.

## 4. Load it on the server

Add this to the server startup parameters:

```text
-mod=@Wonderland_Framework
```

For a local test, the client must also load the mod with the same `-mod` parameter. Do not publish or distribute unsigned builds; add signatures before any public server/Workshop release.

## 5. Verify

Start the server and inspect its script log (normally in the server profile directory). The success messages are listed in [`TestChecklist.md`](TestChecklist.md).

## Configuration

On the first successful server startup, the framework creates:

```text
<server profile>\WonderlandFramework\ServerConfig.json
```

Set `EnableBootstrapModule` to `false` only if you deliberately want to suppress the Sprint 1 test module.

## Important packaging note

This sprint is a development bootstrap, not a Steam Workshop-ready release. Before publishing, create a key/signature pair, test on a clean server, add preview artwork, assign a Steam Workshop item ID in `meta.cpp`, and review any third-party asset licenses.
