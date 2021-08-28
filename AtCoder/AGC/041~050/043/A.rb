h, w = gets.split.map(&:to_i)
s = h.times.map{gets.chomp}

dx = [1, 0]
dy = [0, 1]
dp = Array.new(h){Array.new(w, 10 ** 6)}
if s[0][0] == '#'
  dp[0][0] = 1
else
  dp[0][0] = 0
end

h.times do |i|
  w.times do |j|
    2.times do |k|
      nx = i + dx[k]
      ny = j + dy[k]
      next if nx >= h || ny >= w
      if s[i][j] == '.' && s[nx][ny] == '#'
        dp[nx][ny] = [dp[nx][ny], dp[i][j] + 1].min
      else
        dp[nx][ny] = [dp[nx][ny], dp[i][j]].min
      end
    end
  end
end

puts dp[h - 1][w - 1]
