class UnionFind
  def initialize(size)
    @rank = Array.new(size, 0)
    @parent = Array.new(size, &:itself)
  end

  def unite(x_node, y_node)
    x_parent = find_parent(x_node)
    y_parent = find_parent(y_node)
    return if x_parent == y_parent

    if @rank[x_parent] > @rank[y_parent]
      @parent[y_parent] = x_parent
    else
      @parent[x_parent] = y_parent
      @rank[y_parent] += 1 if @rank[x_parent] == @rank[y_parent]
    end
  end

  def find_parent(node)
    @parent[node] == node ? node : @parent[node] = find_parent(@parent[node])
  end

  def same_parent?(x_node, y_node)
    find_parent(x_node) == find_parent(y_node)
  end
end

n,m = gets.split.map(&:to_i)
u = UnionFind.new(n)
ans = n - 1
m.times do |i|
  a,b = gets.split.map(&:to_i)
  a -= 1
  b -= 1
  unless u.same_parent?(a, b)
    u.unite(a, b)
    ans -= 1
  end
end
puts ans