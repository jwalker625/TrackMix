//
//  AppDelegate.h
//  TrackMix
//
//  Created by Jacob Lawrence Walker on 6/12/14.
//  Copyright (c) 2014 Jacob L. Walker Personal Development. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Track;

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSSlider *slider;
@property (strong) Track *track;

- (IBAction)mute:(id)sender;
- (IBAction)takeFloatValueforVolumeFrom:(id)sender;
- (void) updateUserInterface;

@end
