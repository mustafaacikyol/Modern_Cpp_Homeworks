#include "../api/image_browser.hpp"

namespace image_browser {

void AddFullRow(const ImageRow &row, bool first_row) {

  std::ofstream homework;
  homework.open("../web_app/homework2.html", std::ios::app);
  homework << "<div class='row'>" << std::endl;

  if (first_row != true) {
    homework << "<div class='column'>";

  } else {
    homework << "<div class='column' style=' border : 5px solid green;'>";
  }

  homework << "<h2>" << std::get<0>(row[0]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(row[0]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(row[0]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(row[1]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(row[1]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(row[1]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(row[2]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(row[2]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(row[2]) << "</p>"
           << "</div>" << std::endl;

  homework << "</div>" << std::endl;
}

void CreateImageBrowser(const std::string &title, const std::string &stylesheet,
                        const std::vector<ImageRow> &rows) {

  std::fstream homework;
  homework.open("../web_app/homework3.html");
  homework << "<!DOCTYPE html>" << std::endl
           << "<html>" << std::endl
           << "<head>" << std::endl;
  homework << stylesheet << std::endl;
  homework << title << std::endl << "</head>" << std::endl;
  homework << "<body>" << std::endl;

  homework << "<div class='row'>" << std::endl;
  homework << "<div class='column' style=' border : 5px solid green;'>";
  
  homework << "<h2>" << std::get<0>(rows[0][0]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[0][0]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[0][0]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[0][1]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[0][1]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[0][1]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[0][2]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[0][2]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[0][2]) << "</p>"
           << "</div>" << std::endl;

  homework << "</div>" << std::endl;

  homework << "<div class='row'>" << std::endl;
  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[1][0]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[1][0]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[1][0]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[1][1]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[1][1]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[1][1]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[1][2]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[1][2]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[1][2]) << "</p>"
           << "</div>" << std::endl;

  homework << "</div>" << std::endl;

  homework << "<div class='row'>" << std::endl;
  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[2][0]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[2][0]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[2][0]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[2][1]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[2][1]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[2][1]) << "</p>"
           << "</div>" << std::endl;

  homework << "<div class='column'>";

  homework << "<h2>" << std::get<0>(rows[2][2]) << "</h2>"
           << "<img src='../web_app/data/" << std::get<0>(rows[2][2]) << "' />"
           << "<p>Score = " << std::fixed << std::setprecision(2)
           << std::get<1>(rows[2][2]) << "</p>"
           << "</div>" << std::endl;

  homework << "</div>" << std::endl;

  homework << "</body>" << std::endl;
  homework << "</html>" << std::endl;
  homework.close();
}
} // namespace image_browser