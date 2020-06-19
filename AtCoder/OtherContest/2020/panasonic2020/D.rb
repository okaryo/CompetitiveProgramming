N = gets.to_i

CHARS = %w(a b c d e f g h i j k l)

def dfs(x, i)
  if x.length == N
    puts x
    return
  end

  0.upto(i) do |j|
    dfs(x + CHARS[j], i == j ? i + 1 : i)
  end
end

dfs('a', 1)
