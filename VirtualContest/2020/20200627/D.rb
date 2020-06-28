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

n,q = gets.split.map(&:to_i)
union_find = UnionFind.new(n)

q.times do
  p,a,b = gets.split.map(&:to_i)
  if p == 0
    union_find.unite(a-1, b-1)
  else
    puts union_find.same_parent?(a-1, b-1) ? 'Yes' : 'No'
  end
end