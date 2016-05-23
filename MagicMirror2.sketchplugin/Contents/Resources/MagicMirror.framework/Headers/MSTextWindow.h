//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class MSContentDrawView, NSTextView;

@interface MSTextWindow : NSWindow
{
    MSContentDrawView *_drawView;
    NSTextView *_textView;
}

+ (struct CGRect)adjustFrameHeight:(struct CGRect)arg1;
+ (struct CGRect)adjustFrameWidth:(struct CGRect)arg1 alignment:(unsigned long long)arg2;
+ (struct CGRect)makeBiggerRect:(struct CGRect)arg1 withBehaviour:(long long)arg2 alignment:(unsigned long long)arg3;

- (void)addTextView:(id)arg1;
- (BOOL)canBecomeKeyWindow;
@property(retain, nonatomic) MSContentDrawView *drawView; // @synthesize drawView=_drawView;
- (id)initWithRect:(struct CGRect)arg1 drawViewRect:(struct CGRect)arg2;
- (void)moveToRect:(struct CGRect)arg1 drawViewRect:(struct CGRect)arg2 behaviour:(long long)arg3;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;

@end

