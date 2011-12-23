/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSDate, NSString, NSNumber;

@interface ADCalendarEventJSO : ADJavaScriptObject  {
    NSString *_eventDescription;
    NSString *_location;
    NSString *_summary;
    NSDate *_start;
    NSDate *_end;
    NSNumber *_allDay;
}

@property(retain) NSNumber * allDay;
@property(retain) NSDate * end;
@property(retain) NSDate * start;
@property(retain) NSString * summary;
@property(retain) NSString * location;
@property(retain) NSString * eventDescription;

+ (id)inputRequiredProperties;
+ (id)scriptingKeys;

- (id)eventDescription;
- (id)initWithWebScriptObject:(id)arg1;
- (id)allDay;
- (void)setAllDay:(id)arg1;
- (void)setEventDescription:(id)arg1;
- (id)EKEventInEventStore:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)end;
- (void)setLocation:(id)arg1;
- (id)start;
- (void)dealloc;
- (id)location;
- (id)summary;
- (void)setSummary:(id)arg1;

@end
