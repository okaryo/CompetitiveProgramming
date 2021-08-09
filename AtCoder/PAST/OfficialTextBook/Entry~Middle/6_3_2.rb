$h,$w = gets.split.map(&:to_i)
$c = $h.times.map{gets.chomp}
$h.times do |i|
  $w.times do |j|
    if $c[i][j] == 's'
      $si = i
      $sj = j
    end
    if $c[i][j] == 'g'
      $gi = i
      $gj = j
    end
  end
end
$visited = Array.new($h) {Array.new($w) { false }}
$di = [0, 0, 1, -1]
$dj = [1, -1, 0, 0]

def dfs(i, j)
  $visited[i][j] = true

  4.times do |k|
    ni = i + $di[k]
    nj = j + $dj[k]
    next if ni < 0 || nj < 0 || ni >= $h || nj >= $w
    next if $c[ni][nj] == '#'
    unless $visited[ni][nj]
      dfs(ni, nj)
    end
  end
end

dfs($si, $sj)
if $visited[$gi][$gj]
  puts("Yes")
else
  puts ("No")
end
