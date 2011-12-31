//
//  BalloonLayer.h
//  balloon-burst
//
//  Created by Jamie Ly on 12/27/11.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Game.h"

// HelloWorldLayer
@interface BalloonLayer : CCLayerColor
{
    CGSize windowSize_;
    CGPoint windowCenter_;
    CCMenu *menu_;
    float globalScale_;
}

// returns a CCScene that contains the BalloonLayer as the only child
+(CCScene *) scene;
-(Balloon*) newBalloon;
-(void) cleanUpSprite: (CCSprite*) balloon;
-(void) popBalloon: (Balloon*) balloon;
-(void) setUpClouds;
-(void) checkTouchTreasure: (CGPoint) location;
-(void) checkTouchBalloons: (CGPoint) location;

-(void) updateBalloons:(ccTime)dt;
-(void) updateClouds:(ccTime)dt;
-(void) showGameOver;

-(void) showRound;
-(void) nextRound;

@end
