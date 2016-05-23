//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSEventHandler.h"

#import "BCPopoverDelegate.h"
#import "MSColorInspectorDelegate.h"
#import "MSModeModePickerDelegate.h"

@class BCPopover, MSBitmapMagicWandEditor, MSBitmapRectangleEditor, MSModePickerView, NSBezierPath, NSBitmapImageRep, NSButton, NSColorSpace, NSCursor, NSString;

@interface MSBitmapEditEventHandler : MSEventHandler <MSModeModePickerDelegate, BCPopoverDelegate, MSColorInspectorDelegate>
{
    long long _currentMode;
    NSBezierPath *_accumulatedSelection;
    MSModePickerView *_pickerView;
    NSButton *_rectSelectionButton;
    NSButton *_magicWandButton;
    NSColorSpace *_colorSpace;
    MSBitmapRectangleEditor *_rectangleEditor;
    MSBitmapMagicWandEditor *_magicWandEditor;
    BCPopover *_popover;
    NSBitmapImageRep *_backupImageRep;
    NSBitmapImageRep *_cachedFirstBitmapImageRep;
    NSCursor *_currentCursor;
}


- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
@property(retain, nonatomic) NSBezierPath *accumulatedSelection; // @synthesize accumulatedSelection=_accumulatedSelection;
- (void)awakeFromNib;
@property(retain, nonatomic) NSBitmapImageRep *backupImageRep; // @synthesize backupImageRep=_backupImageRep;
- (id)bitmapLayer;
- (id)bitmapLayerFromSelectedArea;
@property(retain, nonatomic) NSBitmapImageRep *cachedFirstBitmapImageRep; // @synthesize cachedFirstBitmapImageRep=_cachedFirstBitmapImageRep;
- (BOOL)canDuplicate;
- (struct CGPoint)centerPointForZooming;
- (void)clearAreaUnderSelection;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)colorMagnifierAction:(id)arg1;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)colorizeAction:(id)arg1;
- (id)coordinateTransformMatrix;
- (void)copy:(id)arg1;
- (void)cropAction:(id)arg1;
- (void)cropLayerFrame;
- (id)crossHairCursor;
- (id)crossHairCursorAdd;
- (id)crossHairCursorRemove;
@property(retain, nonatomic) NSCursor *currentCursor; // @synthesize currentCursor=_currentCursor;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
- (void)cut:(id)arg1;
- (void)drawBorderAroundBounds;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawSizeLabel;
- (void)duplicate:(id)arg1;
- (void)fillSelectionWithColor:(id)arg1;
- (void)fillSelectionWithColor:(id)arg1 blending:(unsigned long long)arg2;
- (void)finishEditing:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)handlerGotFocus;
- (void)handlerWillLoseFocus;
- (struct CGRect)imageBounds;
- (id)imageFromSelectedArea;
- (struct CGSize)imageSize;
- (unsigned long long)inspectorLocation;
- (BOOL)inspectorShouldShowLayerSpecificProperties;
- (void)invertAction:(id)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)magicWandAction:(id)arg1;
@property(retain, nonatomic) NSButton *magicWandButton; // @synthesize magicWandButton=_magicWandButton;
- (id)magicWandCursor;
- (id)magicWandCursorAdd;
- (id)magicWandCursorRemove;
@property(retain, nonatomic) MSBitmapMagicWandEditor *magicWandEditor; // @synthesize magicWandEditor=_magicWandEditor;
- (void)makeNewBackupImage;
- (void)markImageAsEdited;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)nibName;
- (void)paste:(id)arg1;
@property(retain, nonatomic) MSModePickerView *pickerView; // @synthesize pickerView=_pickerView;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (void)pickerViewChanged:(id)arg1;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
- (void)popoverWillClose:(id)arg1;
- (struct CGRect)rectFromBitmapToBoundsCoordinates:(struct CGRect)arg1;
- (BOOL)rectHasBeenCropped:(struct CGRect)arg1 fromImage:(id)arg2;
- (void)rectSelectionAction:(id)arg1;
@property(retain, nonatomic) NSButton *rectSelectionButton; // @synthesize rectSelectionButton=_rectSelectionButton;
@property(retain, nonatomic) MSBitmapRectangleEditor *rectangleEditor; // @synthesize rectangleEditor=_rectangleEditor;
- (void)refreshOverlayRect:(struct CGRect)arg1;
- (void)selectLayerBelowPoint:(struct CGPoint)arg1;
- (struct CGRect)selectedRect;
- (id)selectionBezierForFlippingCoordinates;
- (void)selectionDidChangeTo:(id)arg1;
- (struct CGRect)selectionRectInLayerCoordinates;
- (void)setImage:(id)arg1 forBitmapLayer:(id)arg2;
- (BOOL)shouldDrawLayerSelection;
- (BOOL)shouldHideExportBar;
- (id)toolbarIdentifier;
- (void)validateButtons;
- (void)vectorizeAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

