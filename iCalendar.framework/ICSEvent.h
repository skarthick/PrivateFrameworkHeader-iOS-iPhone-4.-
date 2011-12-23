/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDate, NSArray, NSString, ICSUserAddress, ICSDuration, NSURL;

@interface ICSEvent : ICSComponent  {
}

@property int transp;
@property int x_apple_ews_busystatus;
@property BOOL x_apple_dontschedule;
@property(retain) NSArray * x_calendarserver_attendee_comment;
@property(retain) NSString * x_calendarserver_private_comment;
@property BOOL x_wr_rsvpneeded;
@property BOOL x_wr_itipstatusml;
@property BOOL x_wr_itipstatusattendeeml;
@property BOOL x_wr_itipalreadysent;
@property BOOL x_apple_needs_reply;
@property BOOL x_apple_ignore_on_restore;
@property(retain) NSString * x_apple_ews_permission;
@property BOOL x_apple_ews_needsserverconfirmation;
@property(retain) NSString * x_apple_ews_itemid;
@property(retain) NSString * x_apple_ews_changekey;
@property(retain) NSString * x_apple_dropbox;
@property(retain) NSURL * url;
@property(retain) NSString * uid;
@property(retain) NSString * summary;
@property int status;
@property unsigned int sequence;
@property(retain) NSArray * rrule;
@property(retain) ICSDate * recurrence_id;
@property(retain) NSArray * rdate;
@property(retain) ICSUserAddress * organizer;
@property(retain) NSString * location;
@property(retain) ICSDate * last_modified;
@property(retain) NSArray * exrule;
@property(retain) NSArray * exdate;
@property(retain) ICSDuration * duration;
@property(retain) ICSDate * dtstart;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtend;
@property(retain) NSString * description;
@property(retain) ICSDate * created;
@property int classification;
@property(retain) NSArray * attendee;
@property(retain) NSArray * attach;

+ (id)name;

- (BOOL)x_wr_rsvpneeded;
- (id)x_calendarserver_attendee_comment;
- (BOOL)x_apple_dontschedule;
- (void)setX_calendarserver_attendee_comment:(id)arg1;
- (void)setX_apple_dontschedule:(BOOL)arg1;
- (void)setX_wr_itipalreadysent:(BOOL)arg1;
- (BOOL)x_wr_itipalreadysent;
- (void)setX_wr_itipstatusattendeeml:(BOOL)arg1;
- (BOOL)x_wr_itipstatusattendeeml;
- (void)setX_wr_itipstatusml:(BOOL)arg1;
- (BOOL)x_wr_itipstatusml;
- (void)setX_wr_rsvpneeded:(BOOL)arg1;
- (int)x_apple_ews_busystatus;
- (void)setX_apple_ews_busystatus:(int)arg1;
- (void)fixComponent;
- (BOOL)isAllDay;
- (BOOL)x_apple_needs_reply;
- (int)transp;
- (id)x_calendarserver_private_comment;
- (void)setX_apple_needs_reply:(BOOL)arg1;
- (void)setTransp:(int)arg1;
- (void)setX_calendarserver_private_comment:(id)arg1;
- (BOOL)validate:(id*)arg1;

@end
