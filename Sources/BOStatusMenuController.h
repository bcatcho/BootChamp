//
//  BOStatusMenuController.h
//  BootChamp
//
//  Created by Kevin Wojniak on 7/6/08.
//  Copyright 2008-2012 Kevin Wojniak. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface BOStatusMenuController : NSObject <NSMenuDelegate>
{
	NSStatusItem *statusItem;
	NSMenuItem *bootMenuItem;
}

@end
