# Project Wonderland

**Sprint 1 — Wonderland Bootstrap**  
Version: `0.1.0-alpha`

Project Wonderland is a standalone, modular DayZ roleplay framework. This Sprint 1 release is deliberately small: it proves the mod can load scripts, create its server configuration, initialize the framework, register a sample module, and shut down cleanly.

## What is included

- DayZ addon configuration (`config.cpp`)
- Server-side framework bootstrap
- Central logger
- Module base class and module manager
- JSON server configuration that is created in the server profile
- One sample `Bootstrap` module to verify the lifecycle
- Build and test instructions

## What is not included yet

Furniture, power, traders, territory, economy, vehicles, admin tools, assets, and loot changes are future modules. This package is the verified foundation for those systems.

## Quick start

1. Read [`Docs/BuildGuide.md`](Docs/BuildGuide.md).
2. Build the addon PBO with DayZ Tools Addon Builder.
3. Launch a local or dedicated DayZ server with `@Wonderland_Framework` enabled.
4. Check the server script log for `[Wonderland]` startup messages.

## Repository layout

`Wonderland_Framework` is the DayZ mod source directory. The `@Wonderland_Framework` folder is the packaged test output location and is intentionally ignored by Git.

## License

MIT. See [`LICENSE`](LICENSE).
