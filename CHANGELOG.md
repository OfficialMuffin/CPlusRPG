# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [Unreleased]
## 0.0.7 - 2020-08-20
### Changed
- Added directories and used C++ file structure
### Added
- Bank for player coins
### Known Issues
- Program exits after asking for user input

## 0.0.6 - 2020-06-24
### Changed
- XP and Coin are now in one player header file
- Constant ARRAY_SIZE for spawn points, may increase the amount in the future.

### Fixed
- Console no longer utputs a memory address when user name input.

### Known Issues
- After user has been to the Forest, game will continue to next spawn location.

## 0.0.5 - 2020-06-24
### Changed
- Detect if using windows or linux to use sleep function
- Shorter delay time between text

### Known Issues
- Console outputs memory value after user enters their name

## 0.0.4 - 2019-10-10
### Added
- include guard

## 0.0.3 - 2018-10-29
### Removed
- Removed duplicate code as the save file was corrupted and was committed.

### Changed
- Changed comments into its correct syntax
- Meet NPC when it approaches you


## 0.0.2 - 2018-10-22
### Added
- Switch statements to let the user control how the game flows.

### Known Issues
- Forest spawn plays the next case of 1 is chosen.


## 0.0.1 - 2018-10-20
### Added
- Main Game
- Classes for NPC's and Players as there will be more in game and hard to keep track of.

### Changed
- Random spawn point to a user chosen spawn

