
#include <SDL/SDL.h>

// for i in `grep '#define SDL_.*0x' -r SDL_video.h  | sed 's/\s/\n/g' | grep SDL_ | sed s/SDL_//` ; do echo -e "\t\$$i = SDL_$i,"  ; done

typedef SDL_Surface $Surface;
typedef SDL_PixelFormat $PixelFormat;
typedef SDL_Rect $Rect;
typedef SDL_Color $Color;
typedef SDL_Palette $Palette;
typedef SDL_VideoInfo $VideoInfo;
typedef SDL_Overlay $Overlay;

typedef SDL_ActiveEvent $ActiveEvent;
typedef SDL_KeyboardEvent $KeyboardEvent;
typedef SDL_MouseMotionEvent $MouseMotionEvent;
typedef SDL_MouseButtonEvent $MouseButtonEvent;
typedef SDL_JoyAxisEvent $JoyAxisEvent;
typedef SDL_JoyBallEvent $JoyBallEvent;
typedef SDL_JoyHatEvent $JoyHatEvent;
typedef SDL_JoyButtonEvent $JoyButtonEvent;
typedef SDL_ResizeEvent $ResizeEvent;
typedef SDL_ExposeEvent $ExposeEvent;
typedef SDL_QuitEvent $QuitEvent;
typedef SDL_UserEvent $UserEvent;
typedef SDL_SysWMmsg $SysWMmsg;
typedef SDL_SysWMEvent $SysWMEvent;
typedef SDL_Event $Event;
typedef SDL_keysym $Keysym;

enum
{

// init flags

	$INIT_AUDIO = SDL_INIT_AUDIO,
	$INIT_VIDEO = SDL_INIT_VIDEO,
	$INIT_CDROM = SDL_INIT_CDROM,
	$INIT_JOYSTICK = SDL_INIT_JOYSTICK,
	$INIT_NOPARACHUTE = SDL_INIT_NOPARACHUTE,
	$INIT_EVENTTHREAD = SDL_INIT_EVENTTHREAD,
	$INIT_EVERYTHING = SDL_INIT_EVERYTHING,

// setvideo flags

	$SWSURFACE = SDL_SWSURFACE,
	$HWSURFACE = SDL_HWSURFACE,
	$ASYNCBLIT = SDL_ASYNCBLIT,
	$ANYFORMAT = SDL_ANYFORMAT,
	$HWPALETTE = SDL_HWPALETTE,
	$DOUBLEBUF = SDL_DOUBLEBUF,
	$FULLSCREEN = SDL_FULLSCREEN,
	$OPENGL = SDL_OPENGL,
	$OPENGLBLIT = SDL_OPENGLBLIT,
	$RESIZABLE = SDL_RESIZABLE,
	$NOFRAME = SDL_NOFRAME,
	$HWACCEL = SDL_HWACCEL,
	$SRCCOLORKEY = SDL_SRCCOLORKEY,
	$RLEACCELOK = SDL_RLEACCELOK,
	$RLEACCEL = SDL_RLEACCEL,
	$SRCALPHA = SDL_SRCALPHA,
	$PREALLOC = SDL_PREALLOC,
	$YV12_OVERLAY = SDL_YV12_OVERLAY,
	$IYUV_OVERLAY = SDL_IYUV_OVERLAY,
	$YUY2_OVERLAY = SDL_YUY2_OVERLAY,
	$UYVY_OVERLAY = SDL_UYVY_OVERLAY,
	$YVYU_OVERLAY = SDL_YVYU_OVERLAY,
	$LOGPAL = SDL_LOGPAL,
	$PHYSPAL = SDL_PHYSPAL,

// event types

	$NOEVENT = SDL_NOEVENT,
	$ACTIVEEVENT = SDL_ACTIVEEVENT,
	$KEYDOWN = SDL_KEYDOWN,
	$KEYUP = SDL_KEYUP,
	$MOUSEMOTION = SDL_MOUSEMOTION,
	$MOUSEBUTTONDOWN = SDL_MOUSEBUTTONDOWN,
	$MOUSEBUTTONUP = SDL_MOUSEBUTTONUP,
	$JOYAXISMOTION = SDL_JOYAXISMOTION,
	$JOYBALLMOTION = SDL_JOYBALLMOTION,
	$JOYHATMOTION = SDL_JOYHATMOTION,
	$JOYBUTTONDOWN = SDL_JOYBUTTONDOWN,
	$JOYBUTTONUP = SDL_JOYBUTTONUP,
	$QUIT = SDL_QUIT,
	$SYSWMEVENT = SDL_SYSWMEVENT,
	$EVENT_RESERVEDA = SDL_EVENT_RESERVEDA,
	$EVENT_RESERVEDB = SDL_EVENT_RESERVEDB,
	$VIDEORESIZE = SDL_VIDEORESIZE,
	$VIDEOEXPOSE = SDL_VIDEOEXPOSE,
	$EVENT_RESERVED2 = SDL_EVENT_RESERVED2,
	$EVENT_RESERVED3 = SDL_EVENT_RESERVED3,
	$EVENT_RESERVED4 = SDL_EVENT_RESERVED4,
	$EVENT_RESERVED5 = SDL_EVENT_RESERVED5,
	$EVENT_RESERVED6 = SDL_EVENT_RESERVED6,
	$EVENT_RESERVED7 = SDL_EVENT_RESERVED7,

	$USEREVENT = SDL_USEREVENT,

	$NUMEVENTS = SDL_NUMEVENTS,

// event masks

	$ACTIVEEVENTMASK = SDL_ACTIVEEVENTMASK,
	$KEYDOWNMASK = SDL_KEYDOWNMASK,
	$KEYUPMASK = SDL_KEYUPMASK,
	$KEYEVENTMASK = SDL_KEYEVENTMASK,
	$MOUSEMOTIONMASK = SDL_MOUSEMOTIONMASK,
	$MOUSEBUTTONDOWNMASK = SDL_MOUSEBUTTONDOWNMASK,
	$MOUSEBUTTONUPMASK = SDL_MOUSEBUTTONUPMASK,
	$MOUSEEVENTMASK = SDL_MOUSEEVENTMASK,
	$JOYAXISMOTIONMASK = SDL_JOYAXISMOTIONMASK,
	$JOYBALLMOTIONMASK = SDL_JOYBALLMOTIONMASK,
	$JOYHATMOTIONMASK = SDL_JOYHATMOTIONMASK,
	$JOYBUTTONDOWNMASK = SDL_JOYBUTTONDOWNMASK,
	$JOYBUTTONUPMASK = SDL_JOYBUTTONUPMASK,
	$JOYEVENTMASK = SDL_JOYEVENTMASK,
	$VIDEORESIZEMASK = SDL_VIDEORESIZEMASK,
	$VIDEOEXPOSEMASK = SDL_VIDEOEXPOSEMASK,
	$QUITMASK = SDL_QUITMASK,
	$SYSWMEVENTMASK = SDL_SYSWMEVENTMASK,


};

