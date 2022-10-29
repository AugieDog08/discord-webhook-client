#include <iostream>
#include <string>

int main() {
    std::string url, name, avatar, content, stringRequest;
    std::cout << "== Simple Discord Webhook Client ==\n\nWebhook URL (required): ";
    std::cin >> url;
    std::cout << "Webhook Name (optional): ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Webhook Avatar URL (optional): ";
    std::getline(std::cin, avatar);
    std::cout << "Starting webhook client with url: " + url + ", username: " + name + ", and avatar url: " + avatar + "\nPress ctrl+c to exit.\n\n";
    while (true)
    {
        std::cout << "> ";
        std::cin >> content;
        stringRequest = "curl -d \"username=" + name + "&avatar_url=" + avatar + "&content=" + content + "\" -X POST " + url;
        system(stringRequest.c_str());
    }
}
