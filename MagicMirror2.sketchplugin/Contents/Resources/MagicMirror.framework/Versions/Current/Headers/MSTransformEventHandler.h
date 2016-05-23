//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPointsEventHandler.h"

@class DKDistortionTransform, MSLayerGroup, MSPointArray, MSShapeDictionary, NSMutableArray;

@interface MSTransformEventHandler : MSPointsEventHandler
{
    MSLayerGroup *currentGroup;
    struct CGRect originalRect;
    unsigned long long directionLock;
    struct CGPoint firstSelectedLocation;
    DKDistortionTransform *_transform;
    MSPointArray *_transformPoints;
    MSPointArray *_mouseDownPoints;
    MSShapeDictionary *_shapeDictionary;
    NSMutableArray *_originalPoints;
}


- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1;
- (struct CGRect)bounds;
- (void)concatTransformsForDrawSnaps;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (id)currentGroup;
- (id)cursorForCorner:(long long)arg1;
- (void)drawHandleLines;
- (void)handlerGotFocus;
- (void)handlerWillLoseFocus;
- (id)initWithManager:(id)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
@property(retain, nonatomic) MSPointArray *mouseDownPoints; // @synthesize mouseDownPoints=_mouseDownPoints;
- (void)movePointsRelatedToCorner:(long long)arg1 newLocation:(struct CGPoint)arg2 previous:(struct CGPoint)arg3;
@property(retain, nonatomic) NSMutableArray *originalPoints; // @synthesize originalPoints=_originalPoints;
- (struct CGPoint)pointAtCorner:(long long)arg1;
- (id)points;
- (id)pointsToSnap;
- (void)recordOriginalShapes;
- (void)replacePointAtCorner:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)replacePointAtIndexWithUndo:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)resetTransformsForLayer:(id)arg1;
@property(retain, nonatomic) MSShapeDictionary *shapeDictionary; // @synthesize shapeDictionary=_shapeDictionary;
@property(retain, nonatomic) DKDistortionTransform *transform; // @synthesize transform=_transform;
@property(retain, nonatomic) MSPointArray *transformPoints; // @synthesize transformPoints=_transformPoints;
- (BOOL)shouldDrawLayerSelection;
- (id)snapsForShape;
- (void)transformShape;

@end

