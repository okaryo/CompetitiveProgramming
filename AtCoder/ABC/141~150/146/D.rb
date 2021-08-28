n = gets.to_i
ab = (n-1).times.map{gets.split.map(&:to_i)}

max_path = 0
path = Array.new(n){Hash.new}
ab.each do |a, b|
  path[a - 1][b - 1] = -1
  path[b - 1][a - 1] = -1
  max_path = [max_path, path[a - 1].length, path[b - 1].length].max
end
puts max_path

# bfs
queue = [0]
until queue.empty? do
  from = queue.shift
  colors = {}
  path[from].each do |to, color|
    if color == -1
      queue << to
    else
      colors[color] = true
    end
  end

  c_i = 1
  path[from].each do |to, color|
    next unless color == -1
    t = c_i
    cnt_to = path[from].length
    t.upto(cnt_to) do |i|
      unless colors[i]
        path[from][to] = i
        path[to][from] = i
        colors[i] = true
        c_i += 1
        break
      else
        c_i += 1
      end
    end
  end
end

ab.each do |a, b|
  puts path[a - 1][b - 1]
end
