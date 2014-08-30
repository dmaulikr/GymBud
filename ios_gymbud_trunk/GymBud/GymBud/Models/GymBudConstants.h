//
//  GymBudConstants.h
//  GymBud
//
//  Created by Benjamin Hendricks on 8/3/14.
//  Copyright (c) 2014 GymBud. All rights reserved.
//

#define kGymBudActivities [NSArray arrayWithObjects: @"Aerobics", @"Basketball", @"Crossfit", @"Running", @"Swimming", @"Weightlifting", @"Yoga", nil]
#define kGymBudActivityMapIcons [NSArray arrayWithObjects: @"aerobicsMap.png", @"basketballMap.png", @"crossfitMap.png", @"runningMap.png", @"swimmingMap.png", @"weightliftingMap.png", @"yogaMap.png", nil]
#define kGymBudActivityIcons [NSArray arrayWithObjects: @"aerobicsIcon.png", @"basketballIcon.png", @"crossfitIcon.png", @"runningIcon.png", @"swimmingIcon.png", @"weightliftingIcon.png", @"yogaIcon.png", nil]

#define kGymBudCountArray [NSArray arrayWithObjects: @"1", @"2", @"3", @"4", @"5", @"6", @"7", @"8", @"9", @"10", @"11", @"12", @"13", @"14", nil]
#define kGymBudDurationMinuteArray [NSArray arrayWithObjects: @"0", @"15", @"30", @"45", nil]
#define kGymBudDurationHourArray [NSArray arrayWithObjects: @"0", @"1", @"2", @"3", @"4", @"5", nil]

#define kGymBudActivityIconMapping [NSDictionary dictionaryWithObjects:kGymBudActivityIcons forKeys:kGymBudActivities]
#define kGymBudActivityMapIconMapping [NSDictionary dictionaryWithObjects:kGymBudActivityMapIcons forKeys:kGymBudActivities]

#define kGoogleApiKey @"AIzaSyBYOIc_oRgl8ridepQWCR3mG9IkfEODe8A"

#define kFacebookUsername @"user_fb_name"

// Loading Animation Stuff
#define kLoadingAnimationHeight 138
#define kLoadingAnimationWidth 200
#define kLoadingAnimationDuration 0.9
#define kLoadingLogoName @"loadingLogo"
#define kLoadingImageFirst @"load9.png"
#define kLoadingImagesArray [NSArray arrayWithObjects:[UIImage imageNamed:@"load9.png"],[UIImage imageNamed:@"load8.png"],[UIImage imageNamed:@"load7.png"],[UIImage imageNamed:@"load6.png"],[UIImage imageNamed:@"load5.png"],[UIImage imageNamed:@"load4.png"],[UIImage imageNamed:@"load3.png"],[UIImage imageNamed:@"load2.png"],[UIImage imageNamed:@"load1.png"],nil]