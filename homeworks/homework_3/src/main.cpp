#include "../include/homework_3.hpp"

int main() {

  html_writer::OpenDocument();

  std::string stylesheet =
      "<link rel='stylesheet' type='text/css' href='style.css' />";
  html_writer::AddCSSStyle(stylesheet);

  std::string title = "<title>Image Browser</title>";
  html_writer::AddTitle(title);

  html_writer::OpenBody();

  html_writer::OpenRow();

  std::string img_path = "../web_app/data/000000.png";
  float score = 0.98;
  bool highlight = true;
  html_writer::AddImage(img_path, score, highlight);

  img_path = "../web_app/data/000100.png";
  score = 0.96;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  img_path = "../web_app/data/000200.png";
  score = 0.88;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  html_writer::CloseRow();

  html_writer::OpenRow();

  img_path = "../web_app/data/000300.png";
  score = 0.87;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  img_path = "../web_app/data/000400.png";
  score = 0.80;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  img_path = "../web_app/data/000500.png";
  score = 0.79;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  html_writer::CloseRow();

  html_writer::OpenRow();

  img_path = "../web_app/data/000600.png";
  score = 0.76;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  img_path = "../web_app/data/000700.png";
  score = 0.75;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  img_path = "../web_app/data/000800.png";
  score = 0.20;
  highlight = false;
  html_writer::AddImage(img_path, score, highlight);

  html_writer::CloseRow();

  html_writer::CloseBody();

  html_writer::CloseDocument();

  return 0;
}