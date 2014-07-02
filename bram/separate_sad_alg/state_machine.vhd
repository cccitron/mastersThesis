TYPE state_type IS (idle, writeToBram, readFromBram, sadCalc, minCalc);
SIGNAL present_state, next_state : state_type;

SIGNAL ready : STD_LOGIC := '0';

state_clock : PROCESS (clk)
BEGIN
   IF (RISING_EDGE(clk)) THEN
      present_state <= next_state;
   END IF;
END PROCESS state_clock;


state_machine : PROCESS (present_state, [read_write], [ready])
BEGIN
   CASE present_state IS
      WHEN idle =>
         
         
         
         IF (ready = '1') THEN
            next_state <= writeToBram;
         ELSE
            next_state <= idle;
         END IF;
         
      WHEN writeToBram =>
         
         
         
         IF (ready = '1') THEN
            next_state <= readFromBram;
         ELSE
            next_state <= writeToBram;
         END IF;
         
      WHEN readFromBram =>
         
         
         
         IF (ready = '1') THEN
            next_state <= sadCalc;
         ELSE
            next_state <= readFromBram;
         END IF;
         
      WHEN sadCalc =>
         
         
         
         IF (ready = '1') THEN
            next_state <= minCalc;
         ELSE
            next_state <= sadCalc;
         END IF;
         
      WHEN minCalc =>
         
         
         
         IF (ready = '1') THEN
            next_state <= idle;
         ELSE
            next_state <= minCalc;
         END IF;
         
      --WHEN writeToBram =>
         
   END CASE;
END PROCESS state_machine;
