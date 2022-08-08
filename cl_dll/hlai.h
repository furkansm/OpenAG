#pragma once
#include <cstdint>

class Vector;

struct AIWaypoint {
    Vector location;
    AIWaypoint(Vector location) : location(location) {}
};

class HLAI {
    public:
        void Init( void );
        void ServerInit( void );
        void Update( void );
        bool IsEnabled( void );
        AIWaypoint* ClosestWaypoint( void );

        /* From 0 to 1 */
        float input_sidemove = 0.0f;
        float input_forwardmove = 1.0f;
        float input_upmove = 0.0f;

        bool input_jump = false;
        bool input_attack1 = false;
        bool input_attack2 = false;
        bool input_reload = false;
        bool input_duck = false;

        /* Unit is degrees */
        float input_yaw = 0.0f;  
        float input_pitch = 0.0f;

        std::vector<AIWaypoint> waypoints;
};

extern HLAI hlai;