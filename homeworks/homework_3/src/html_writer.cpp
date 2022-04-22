#include "../api/html_writer.hpp"

namespace html_writer {

  void OpenDocument() {

    std::fstream homework;
    homework.open("../web_app/homework.html");
    homework << "<!DOCTYPE html>" << std::endl
            << "<html>" << std::endl
            << "<head>" << std::endl;
  }

  void CloseDocument() {

    std::fstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    homework << "</html>" << std::endl;
    homework.close();
  }

  void AddCSSStyle(const std::string &stylesheet) {

    std::ofstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    homework << stylesheet << std::endl;
  }

  void AddTitle(const std::string &title) {

    std::ofstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    homework << title << std::endl << "</head>" << std::endl;
  }

  void OpenBody() {

    std::ofstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    homework << "<body>" << std::endl;
  }

  void CloseBody() {

    std::ofstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    homework << "</body>" << std::endl;
  }

  void OpenRow() {

    std::ofstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    homework << "<div class='row'>" << std::endl;
  }

  void CloseRow() {

    std::ofstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    homework << "</div>" << std::endl;
  }

  void AddImage(const std::string &img_path, float score, bool highlight) {

    std::string title = img_path.substr(16, 25);
    std::ofstream homework;
    homework.open("../web_app/homework.html", std::ios::app);
    if (highlight != true) {
      homework << "<div class='column'>";

    } else {
      homework << "<div class='column' style=' border : 5px solid green;'>";
    }

    homework << "<h2>" << title << "</h2>"
            << "<img src='" << img_path << "' />"
            << "<p>Score = " << std::fixed << std::setprecision(2) << score << "</p>"
            << "</div>" << std::endl;
  }

} // namespace html_writer