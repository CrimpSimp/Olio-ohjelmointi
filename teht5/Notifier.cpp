#include "Notifier.h"
#include "Follower.h"

Notifier::Notifier() {
    cout << "Notificator" << endl;
}

void Notifier::add(Follower* newFollower) {
    if (followers == nullptr) {
        followers = newFollower;
    } else {
        Follower* start = followers;
        while (start -> next != nullptr) {
            start = start -> next;
        }
        start -> next = newFollower;
    }
    cout << newFollower->getName() << " Started following you" << endl;
}

void Notifier::remove(Follower* target) {
    if (followers == nullptr) {
        cout << "Nothing to remove" << endl;
        return;
    }

    if (followers == target) {
        followers = followers->next;
        target -> next = nullptr;
    }

    Follower* start = followers;
    while (start -> next != nullptr && start -> next != target) {
        start = start -> next;
    }

    if (start -> next != nullptr && start -> next == target) {
        start -> next = target->next;
        target -> next = nullptr;
        cout << target->getName() << " Removed" << endl;
    }
}




void Notifier::print() {
    Follower* start = followers;
    cout << "Followers: " << endl;
    while (start != nullptr) {
        cout <<  start->getName() << endl;
        start = start->next;
    }
}

void Notifier::post(string message) {
    cout << "Sending message: " << message << endl;
    Follower* start = followers;
    while (start != nullptr) {
        start->post(message);
        start = start->next;
    }
}
