# ChatRoom Oberserver Pattern Example

### Description
---
Observer pattern is a software architecture in which an object, named the observable or subject, maintains a list of its dependents, called observers, and notifies them automatically of any state changes, usually by calling one of their methods. 

### Diagram
---

The following diagram shows how Observer and Observable classes are linked between them.

<img src="https://github.com/gabridc/medium/blob/main/Patterns/Resources/Observer_Diagram.PNG" alt="Observer pattern diagram" title="Observer pattern diagram"><br><br>

## About this example
---
<br>

### Description
---
The purpose of this example is create a program that simulate a car computer able to manage diferent types of events, the event is added into a queue to be read by the car system which are resposible to manage the event. In this example there are two queues general and error; all events added to general queue must be processed by the dashboard system and the event data recorder on the other hand all events added to error queue must be processed by dashboard, EDR and brake system.

### Flow
---

<img src="https://github.com/gabridc/medium/blob/main/Patterns/Resources/Car_Queue_Listener_Flow.PNG" alt="Queues and systems" title="Queues and systems diagram"><br><br>


ErrorEventor and GeneralEventor classes are childs of its parent class Observable. Observable class declares four functions: addObserver, newEvent, notify and getPendingEvent. 

* The function notify is implemented in Observable class because its implementation is common for all of its childs.

* The function addObserver adds a new system listening the events queue.

* The function notify calls the function observe of every listeners to inform that the a new event has been added.

* The function getPendingEvent are called from Observer class to get the last event added into the queue.

Observer class represent all the system avaiblae in the car, in this example there are three systems: Event Data Recorder (EDR), Dashboard Panel and Brake System.

* The function observe(Observable*) receive as pointer parameter the queue updated, this parameter is user to call getPendingEvent and accessing through the pointer to the list of events emitted.

The global function dispatch decided whihch is the right queue to add an event based on its originator.

### Flow
---

<img src="https://github.com/gabridc/medium/blob/main/Patterns/Resources/Car_Flow.PNG" alt="Flow" title="Flow"><br><br>