//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUINamedLookup.h"

@interface CUINamedLayerImage : CUINamedImage
{
    struct CGRect _frame;
    double _opacity;
    int _blendMode;
    BOOL _fixedFrame;
}

@property(nonatomic) BOOL fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

