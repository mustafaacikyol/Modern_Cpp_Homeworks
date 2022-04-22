#include "../include/homework_3.hpp"

int main() {

  std::string stylesheet =
      "<link rel='stylesheet' type='text/css' href='style.css' />";

  std::string title = "<title>Image Browser</title>";

  image_browser::ScoredImage image1("000000.png", 0.98);
  image_browser::ScoredImage image2("000100.png", 0.96);
  image_browser::ScoredImage image3("000200.png", 0.88);

  image_browser::ImageRow row1{image1, image2, image3};

  image_browser::ScoredImage image4("000300.png", 0.87);
  image_browser::ScoredImage image5("000400.png", 0.80);
  image_browser::ScoredImage image6("000500.png", 0.79);

  image_browser::ImageRow row2{image4, image5, image6};

  image_browser::ScoredImage image7("000600.png", 0.76);
  image_browser::ScoredImage image8("000700.png", 0.75);
  image_browser::ScoredImage image9("000800.png", 0.20);

  image_browser::ImageRow row3{image7, image8, image9};

  std::vector<image_browser::ImageRow> rows{row1, row2, row3};

  image_browser::CreateImageBrowser(title, stylesheet, rows);

  return 0;
}