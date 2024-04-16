
#include <TargetConditionals.h>
#if TARGET_OS_IOS == 1
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

#define IPLUG_AUVIEWCONTROLLER IPlugAUViewController_vWAMDemo
#define IPLUG_AUAUDIOUNIT IPlugAUAudioUnit_vWAMDemo
#import <WAMDemoAU/IPlugAUViewController.h>
#import <WAMDemoAU/IPlugAUAudioUnit.h>

//! Project version number for WAMDemoAU.
FOUNDATION_EXPORT double WAMDemoAUVersionNumber;

//! Project version string for WAMDemoAU.
FOUNDATION_EXPORT const unsigned char WAMDemoAUVersionString[];

@class IPlugAUViewController_vWAMDemo;
