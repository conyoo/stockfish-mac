//
//  SFMChessGame.h
//  Stockfish
//
//  Created by Daylen Yang on 1/8/14.
//  Copyright (c) 2014 Daylen Yang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFMPlayer.h"

#include "../Chess/position.h"

using namespace Chess;

@interface SFMChessGame : NSObject {
    Position *startPosition;
    Position *currPosition;
}

#pragma mark - Properties
@property NSMutableDictionary *tags;
@property NSMutableArray *moves; // Lazy
@property NSString *moveText;

#pragma mark - Init
- (id)initWithWhite:(SFMPlayer *)p1 andBlack:(SFMPlayer *)p2;
- (id)initWithTags:(NSDictionary *)tags andMoves:(NSString *)moves; // Saves the tags and move text

#pragma mark - Interaction
- (void)populateMovesFromMoveText; // Actually load the game

#pragma mark - Export
- (NSString *)pgnString; // PGN string for this game

@end