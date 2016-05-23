//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECDebugMenu.h"

@class ECLogManager;

@interface ECLoggingMenu : ECDebugMenu
{
    ECLogManager *_logManager;
}


- (void)awakeFromNib;
- (id)buildDefaultHandlersMenu;
- (void)buildMenu;
- (id)buildMenuForChannel:(id)arg1;
- (void)channelMenuSelected:(id)arg1;
- (void)channelSelected:(id)arg1;
- (void)channelsChanged:(id)arg1;
- (void)contextMenuSelected:(id)arg1;
- (void)dealloc;
- (void)defaultHandlerSelected:(id)arg1;
- (void)handlerSelected:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)logFolder;
@property(nonatomic) __weak ECLogManager *logManager; // @synthesize logManager=_logManager;
- (void)resetSelected:(id)arg1;
- (void)revealLogFiles;
- (void)revealSettings;
- (void)setup;
- (BOOL)validateMenuItem:(id)arg1;

@end

