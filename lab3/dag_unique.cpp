#include <stdio.h>
#include <memory>
#include <vector>

struct node {
    const char * value;
    std::vector< std::unique_ptr<node> > edges_to;

    node(const char * v) {
        value = v;
    }

    void add_edge_to(std::shared_ptr<node> n) {
        edges_to.push_back(n);
    }
};

int main() {
  std::unique_ptr<node> a = std::make_unique<node>("a");
  std::unique_ptr<node> b = std::make_unique<node>("b");
  std::unique_ptr<node> c = std::make_unique<node>("c");
  std::unique_ptr<node> d = std::make_unique<node>("d");
  std::unique_ptr<node> e = std::make_unique<node>("e");
  std::unique_ptr<node> f = std::make_unique<node>("f");

  a->add_edge_to(b);
  a->add_edge_to(d);
  b->add_edge_to(c);
  b->add_edge_to(d);
  c->add_edge_to(e);
  d->add_edge_to(f);
  e->add_edge_to(f);
}
